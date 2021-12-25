import matplotlib.pyplot as ohms_law

#initalization of variables

ideal_resistors = [510.0,1000.0,2000.0,4700.0,10000.0]
measured_resistors = [503.230,985.670,1975.0,4766.7,10029.0]
ideal_voltage_source = 5.0
measured_voltage_source = 5.047

current_measured = [10.029,5.121,2.560,1.081,0.503]
# calculated variables
current_ideal = []
current_real_calculated = []

#calculations
#v=ir
#v/r=i
for count in range(len(ideal_resistors)):
    current_real_calculated.append((measured_voltage_source*1000)/(measured_resistors[count]))
    current_ideal.append((ideal_voltage_source*1000)/(ideal_resistors[count]))


ohms_law.plot(current_ideal, ideal_resistors)
ohms_law.plot(current_real_calculated, measured_resistors)
ohms_law.plot(current_measured, measured_resistors)


ohms_law.suptitle("ohm law\n measured vs ideal")
ohms_law.xlabel("I (in milliamperes)")
ohms_law.ylabel("R (resistance in ohms)")

ohms_law.show()
