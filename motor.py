from appJar import gui
import RPi.GPIO as GPIO
import time
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(19,GPIO.OUT)
GPIO.setup(13,GPIO.OUT)
GPIO.setup(16,GPIO.OUT)
GPIO.setup(20,GPIO.OUT)
RL = GPIO.PWM(19,100)
FR = GPIO.PWM(16,100)
RR = GPIO.PWM(20,100)
FL = GPIO.PWM(13,100)

RL.start(0)
FR.start(0)
RR.start(0)
FL.start(0)

global direction, vel
vel = 0
direction = 0

def left(btn):
	direction = 2
	print "The Robot is turning left!"
	direction_f(direction)
	
def right(btn):
	direction = 1
	print "The Robot is turning Right!"
	direction_f(direction)
	
def direction_f(direction):
	vel = app.getScale("Speed")
	if (direction == 2):
		speed(vel,vel,0,0)
        time.sleep(0.7)
        speed(vel,vel,vel,vel)
	if (direction == 1):
		speed(0,0,vel,vel)
		time.sleep(0.8)
		speed(vel,vel,vel,vel)
	elif (direction == 0):
		speed(vel,vel,vel,vel)
 
def change_vel(btn):
	vel = app.getScale("Speed")	
	speed(vel,vel,vel,vel)
	
        
        
def speed(vel_FL,vel_RL,vel_FR,vel_RR): 
		direction = 0
		vel = app.getScale("Speed")	
		FL.start(vel_FL)
		RL.start(vel_RL)
		FR.start(vel_FR)
		RR.start(vel_RR)   

def stop(btn):
	FL.stop()
	RL.stop()
	FR.stop()
	RR.stop()

def right90(btn):
	speed(0,0,100,100)
	time.sleep(2)
	speed(vel,vel,vel,vel)
	
def left90(btn):
	speed(100,100,0,0)
	time.sleep(1.8)
	speed(vel,vel,vel,vel)

try:   
	app=gui("Control","600x300")
	app.setFont(20)
	app.addLabelScale("Speed")
	app.showScaleIntervals("Speed",100)
	app.showScaleValue("Speed", show=True)
	app.setScaleWidth("Speed",5)
	app.addButton("Left", left)
	app.addButton("Right", right)
	app.addButton("right90", right90)
	app.addButton("left90", left90)
	
	app.addButton("Emergancy Stop", stop)
	app.addButton("Change Speed", change_vel)
	app.go()
	
except KeyboardInterrupt:
	FL.stop()
	RL.stop()
	FR.stop()
	RR.stop()
	GPIO.cleanup()
	
