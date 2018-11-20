import serial
import os
from  time import sleep


def Communicate():
    try:
        ser = serial.Serial(port='/dev/ttyACM0',
                            baudrate=9600,
                            parity=serial.PARITY_NONE,
                            stopbits=serial.STOPBITS_ONE,
                            bytesize=serial.EIGHTBITS,
                            timeout=1
                            )

        ser.flushInput()

    except Exception as error_string:
        print "Unable to read from Arduino"
        print "Check USB Cable connection"
        print str(error_string)
        exit(0)
    flag = 1
    print "Entering the read loop"
    while flag == 1:
      option = raw_input("Enter an option")
      try:
       ser.write(option)
       x = ser.readline()
       print x
      except Exception as error_string:
        print "Unable to read from Sensor"
        print "Check USB Cable connection"
        print "Wait for few seconds and try....."
        print str(error_string)
        exit(0)

if  __name__  ==  "__main__":
   Communicate()
