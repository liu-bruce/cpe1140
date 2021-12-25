import matplotlib.pyplot as ohms_law

#initalization of variables

target_current_in_milliamps = [1.0,2.0,3.0,4.0,5.0]
measured_voltage = [1.9,3.9,5.9,7.8,9.8]
predicted_voltage = [2.0,4.0,6.0,8.0,10.0]
resistor_measured = 1975 # not used but kept for achrive


ohms_law.plot(target_current_in_milliamps , measured_voltage)
ohms_law.plot(target_current_in_milliamps, predicted_voltage)


ohms_law.suptitle("ohm law \n resistance controled at 1975 ohms measured \n target current ")
ohms_law.ylabel("I (target current in milliamperes)")
ohms_law.xlabel("V (volts measured output)")

ohms_law.show()
