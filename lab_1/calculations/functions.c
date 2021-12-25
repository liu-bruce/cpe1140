#include "functions.h"
#include <stdio.h>
void ohms_law_voltage_caluculation()
{
  double voltage = 0.0,
         current [5] = {0.001 , 0.002 , 0.003 , 0.004 , 0.005},
         resistance = 2000.0;

        for(int count = 0 ; count < 5; count++)
        {
          voltage = current[count] * resistance;
          printf("the voltage is :%lf with the current at :%lf using a resistor of value %lf\n", voltage , current[count], resistance );
        }

}

void ohms_law_output_current()
{
  double current = 0.0,
         voltage = 0.0,
         resistance = 0.0;

         printf("Input the voltage:");
         scanf("%lf",& voltage);
         printf("\n\n Input the resistor value:");
         scanf("%lf",& resistance );
         current = voltage/ resistance;

         printf("the expected current is: %lf \n\n", current);

}

void resistor_tolerance_calculator()
{
  double  resistor_base_value = 0.0,
          resistor_tolerance_percentage = 0.0,
          hundred = 100.0,
          resistor_value_error = 0.0,
          resistor_tolerance_high_value = 0.0,
          resistor_tolerance_low_value = 0.0;


  printf("Input base value of the the resistor\n\n\n");

  scanf("%lf",& resistor_base_value);

  printf("Input the tolerance percentage as a whole number\n\n\n");

  scanf("%lf",& resistor_tolerance_percentage);

  resistor_value_error = resistor_base_value * resistor_tolerance_percentage / hundred;
  resistor_tolerance_high_value = resistor_base_value + resistor_value_error;
  resistor_tolerance_low_value = resistor_base_value - resistor_value_error;

  printf("The resistor_tolerance_high_value is: %lf\n\n"
          "The resistor_tolerance_low_value is: %lf\n\n "
          ,resistor_tolerance_high_value,resistor_tolerance_low_value);





}

void hello_world()
{
  printf("hello_world");

}
