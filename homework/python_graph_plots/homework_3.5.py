import matplotlib.pyplot as ohms_law

#initalization of variables
current_output_data = [] # y output
resistance = 100.0 # resitance in ohms constant
voltage = [] # x control variable
temp = 0.0 #  computations output temporary variable

# voltage initalization 0-100 in increments of 10
# some excess in temp but not pushed to the list
for i in range (11):
    voltage.append(temp)
    temp += 10.0
# computes current value using ohms law V/R =I
for k in range(len(voltage)):
    current_output_data.append(voltage[k]/resistance)

# X label data first in a list

ohms_law.plot(voltage,current_output_data)

# labels section
ohms_law.suptitle("ohms law resistance plot \n{expected or ideal values}")
ohms_law.ylabel("I (currrent in Amperes)")
ohms_law.xlabel("V (Volts)")

#displays the graph
ohms_law.show()
