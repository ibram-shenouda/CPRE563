import RPi.GPIO as GPIO # Import Raspberry Pi GPIO library
from time import sleep # Import the sleep function from the time module

GPIO.setmode(GPIO.BOARD) 
GPIO.setup(32, GPIO.OUT, initial=GPIO.LOW) 

while True: 
 GPIO.output(32, GPIO.HIGH) # Turn on
 sleep(1) #1 second sleep
 GPIO.output(32, GPIO.LOW) # Turn off
 sleep(1) 
 
 