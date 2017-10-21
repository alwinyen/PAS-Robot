#!/usr/bin/env python
import rospy
import cv2
import numpy as np
from cv_bridge import CvBridge, CvBridgeError
from sensor_msgs.msg import Image
kernel_elliptic_7 = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (7, 7))
kernel_elliptic_15 = cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (15, 15))
area_threshold = 2000
class MOG2:
	def __init__(self):
		self.fgbg = cv2.BackgroundSubtractorMOG2(history=150, varThreshold=500, bShadowDetection=True)
	def detect(self,image):
		fgmask = self.fgbg.apply(image)
		cv2.morphologyEx(fgmask, cv2.MORPH_CLOSE, kernel_elliptic_7, dst=fgmask)
		cv2.morphologyEx(fgmask, cv2.MORPH_OPEN, kernel_elliptic_15, dst=fgmask)
		contours = cv2.findContours(fgmask.astype(np.uint8), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
		area_box = ((cv2.contourArea(contour), cv2.boundingRect(contour)) for contour in contours[0])
		area_box = [(area, box) for (area, box) in area_box if area > area_threshold]
		area_box.sort(reverse=True)
		bounding_boxes = [((x, y), (x+w, y+h)) for _, (x, y, w, h) in area_box[:5]]
		for p1, p2 in bounding_boxes:
			cv2.rectangle(image, p1, p2, (0, 255, 0), 2)
		return image
		#return fgmask #for param tuning
class Motion:
	def __init__(self):
		rospy.init_node("motion_detector_node")
		self.bridge = CvBridge()
		self.pub = rospy.Publisher('camera/visible/image', Image, queue_size=2)
		rospy.Subscriber("usb_cam/image_raw", Image, self.imageCallback)
		self.motion_detector = MOG2()
		rospy.spin()
	def imageCallback(self, image):
		if self.motion_detector:
			cv_image = self.bridge.imgmsg_to_cv2(image, "bgr8")
			result_img = self.motion_detector.detect(cv_image)
			image = self.bridge.cv2_to_imgmsg(result_img, "bgr8")
			#image = self.bridge.cv2_to_imgmsg(result_img, "mono8") #for param tuning
		self.pub.publish(image)
if __name__ == '__main__':
	detector = Motion()
