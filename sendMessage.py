import serial
ser = serial.Serial(0,9600)
ser.open()

message = raw_input("What would you like to display?")
ser.write(message)




