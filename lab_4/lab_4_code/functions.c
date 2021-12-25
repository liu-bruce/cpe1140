#include <stdio.h>

void resistance_tolernaces()
{
  double set_of_resistors[] = {470.0,
                               620.0,
                               2700.0,
                               1000.0,
                               2000.0,
                               510.0,
                               1421.0,
                               3021.0};
  double resistor_low = 0.0,
         resistor_high = 0.0,
         toleranace_value = 0.0;
printf("\n\n");
for(int count = 0; count < 8; count++)
{
  toleranace_value = set_of_resistors[count] *5/100;
  resistor_low = set_of_resistors[count] - toleranace_value;
  resistor_high = set_of_resistors[count] + toleranace_value;

  printf("The tolerance range of %.4lf resistor is %.4lf - %.4lf \n\n",
          set_of_resistors[count], resistor_low, resistor_high);
}


}

void hello_world()
{
  printf("hello world\n");
}
