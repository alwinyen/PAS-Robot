from appJar import gui
import RPi.GPIO as GPIO
import time
import math
GPIO.setwarnings(False)
GPIO.setmode(GPIO.BCM)
GPIO.setup(21,GPIO.OUT)
GPIO.setup(23,GPIO.OUT)
GPIO.setup(25,GPIO.OUT)
GPIO.setup(24,GPIO.OUT)
GPIO.setup(12,GPIO.OUT)
GPIO.setup(19,GPIO.OUT)
GPIO.setup(13,GPIO.OUT)
GPIO.setup(16,GPIO.OUT)
GPIO.setup(20,GPIO.OUT)
GPIO.setup(4,GPIO.OUT)
GPIO.setup(17,GPIO.OUT)
GPIO.setup(27,GPIO.OUT)
GPIO.setup(22,GPIO.OUT)

GPIO.output(23,GPIO.LOW)
GPIO.output(24,GPIO.LOW)
GPIO.output(25,GPIO.LOW)

R = GPIO.PWM(24,100)
G = GPIO.PWM(25,100)
B = GPIO.PWM(23,100)


FL_DIR = 4
RL_DIR = 17
FR_DIR = 27
RR_DIR = 22

RL = GPIO.PWM(19,100)
FR = GPIO.PWM(16,100)
RR = GPIO.PWM(20,100)
FL = GPIO.PWM(13,100)

RL.start(0)
FR.start(0)
RR.start(0)
FL.start(0)


global vel
vel = 0.0


def stop_f(btn):
	direction = "stop"
	print "The Robot is stop moving!"
	direction_f(direction)

def foward_f(btn):
	direction = "foward"
	print "The Robot is going foward!"
	direction_f(direction)
	
def backward_f(btn):
	direction = "backward"
	print "The Robot is going backward!"
	direction_f(direction)

def inverse():
	global vel
	if(vel < -100):
		vel = -100.0
	if(vel > -1):
		vel = 0.0
	vel = abs(vel)
	GPIO.output(4,GPIO.LOW)
	GPIO.output(17,GPIO.LOW)
	GPIO.output(27,GPIO.LOW)
	GPIO.output(22,GPIO.LOW)
	speed(vel,vel,vel,vel)
	vel = vel*-1.0
	
def normal():
	global vel
	vel = abs(vel)
	if(vel > 100):
		vel = 100.0
	if(vel < 1 and vel > 0):
		vel = 0.0
	GPIO.output(4,GPIO.HIGH)
	GPIO.output(17,GPIO.HIGH)
	GPIO.output(27,GPIO.HIGH)
	GPIO.output(22,GPIO.HIGH)
	speed(vel,vel,vel,vel)

def left(btn):
	app.setLabel("Move","Turning")
	direction = "left"
	print "The Robot is turning left!"
	direction_f(direction)
	
def right(btn):
	app.setLabel("Move","Turning")
	direction = "right"
	print "The Robot is turning Right!"
	direction_f(direction)
	
def backward_foward(backfoward):
	global foward
	if(vel == 0 and backfoward == "backward"):
		foward = False
	if(vel == 0 and backfoward == "foward"):
		foward = True
	if(vel > 0 and backfoward == "backward"):
		foward = True
	if(vel < 0 and backfoward == "backward"):
		foward = False
	if(vel > 0 and backfoward == "foward"):
		foward = True
	if(vel < 0 and backfoward == "foward"):
		foward = False
	return
		
def direction_f(direction):
	global vel
		
	if (direction == "left"):
		if(foward == True):
			app.setLabel("Move","Foward")
		if(foward == True):
			app.setLabel("Move","Backward")
		app.setLabel("Direction","Left")
		app.setLabel("vel",vel)
		GPIO.output(4,GPIO.LOW)
		GPIO.output(17,GPIO.LOW)
		GPIO.output(27,GPIO.HIGH)
		GPIO.output(22,GPIO.HIGH)
		speed(vel,vel,vel,vel)
		time.sleep(0.01)
			
	if (direction == "right"):
		if(foward == True):
			app.setLabel("Move","Foward")
		if(foward == True):
			app.setLabel("Move","Backward")
		app.setLabel("Direction","Right")
		app.setLabel("vel",vel)
		GPIO.output(4,GPIO.HIGH)
		GPIO.output(17,GPIO.HIGH)
		GPIO.output(27,GPIO.LOW)
		GPIO.output(22,GPIO.LOW)
		speed(vel,vel,vel,vel)
		time.sleep(0.01)
		
	if (direction == "foward"):
		backward_foward("foward")
		if(foward == True):
			app.setLabel("Move","Foward")
			app.setLabel("Direction","Increasing Speed")
		if(foward == False):
			app.setLabel("Move","Backward")
			app.setLabel("Direction","Decreasing Speed")
		if(vel == 0):
			vel = 1.0
			normal()
		if (foward == True):
			vel += math.pow(abs(vel),0.3)	
			normal()
		if (foward == False):
			vel += math.pow(abs(vel),0.3)
			inverse()
		app.setLabel("vel",vel)
			
	if (direction == "backward"):
		backward_foward("backward")
		if(foward == True):
			app.setLabel("Move","Foward")
			app.setLabel("Direction","Decreasing Speed")
		if(foward == False):
			app.setLabel("Move","Backward")
			app.setLabel("Direction","Increasing Speed")
		if(vel == 0):
			vel = -1.0	
			inverse()
		if (foward == False):
			vel -= math.pow(abs(vel),0.3)
			inverse()
		if (foward == True):
			vel -= math.pow(abs(vel),0.4)
			normal()
		app.setLabel("vel",vel)
	if (direction == "stop" or vel == 0):
		vel = 0
		RL.start(0)
		FR.start(0)
		RR.start(0)
		FL.start(0)
		app.setLabel("Direction","Stop")
		app.setLabel("vel",vel)
		
	return
			     
def speed(vel_FL,vel_RL,vel_FR,vel_RR):
		if(vel_FL > 0 and vel_FL <= 10 or vel_RL > 0 and vel_RL <= 10 or vel_FR > 0 and vel_FR <= 10 or vel_RR > 0 and vel_RR <= 10 ):
			vel_FL +=10
			vel_RL +=10
			vel_FR +=10
			vel_RR +=10
			vel = 10.0
			app.setLabel("vel",vel)
			
		FL.start(vel_FL)
		RL.start(vel_RL)
		FR.start(vel_FR)
		RR.start(vel_RR)   

def stop(btn):
	FL.stop()
	RL.stop()
	FR.stop()
	RR.stop()

def relay1(btn):
	if GPIO.input(21) == True:
		GPIO.output(21,GPIO.LOW)
	else:
		GPIO.output(21,GPIO.HIGH)

def relay2(btn):
	if GPIO.input(12) == True:
		GPIO.output(12,GPIO.LOW)
	else:
		GPIO.output(12,GPIO.HIGH)	

def color_change():	
	R.start(app.getScale("Red"))
	G.start(app.getScale("Green"))
	B.start(app.getScale("Blue"))
	
try:   
	app=gui("Control","600x500")
	app.setFont(17)
	app.addLabel("Status","Status:")
	app.addLabel("Direction","None")
	app.addLabel("Moving","Moving Direction:")
	app.addLabel("Move","None")
	app.addLabel("Speed","Speed:")
	app.addLabel("vel","0")
	app.setLabel("vel",vel)
	app.addLabelScale("Red")
	app.setScaleRange("Red",0,100,curr=None)
	app.showScaleValue("Red",show= True)
	app.addLabelScale("Green")
	app.setScaleRange("Green",0,100,curr=None)
	app.showScaleValue("Green",show= True)
	app.addLabelScale("Blue")
	app.setScaleRange("Blue",0,100,curr=None)
	app.showScaleValue("Blue",show= True)
	app.bindKey("a", left)
	app.bindKey("d", right)
	app.bindKey("w", foward_f)
	app.bindKey("s", backward_f)
	app.bindKey("x", stop_f)
	app.bindKey("1",relay1)
	app.bindKey("2",relay2)
	app.bindKey("r",red_on)
	app.bindKey("g",green_on)
	app.bindKey("b",blue_on)
	app.registerEvent(color_change)
	app.go()
	GPIO.cleanup()
	
except KeyboardInterrupt:
	FL.stop()
	RL.stop()
	FR.stop()
	RR.stop()
	GPIO.cleanup()
	
