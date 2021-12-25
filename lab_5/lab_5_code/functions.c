#include <stdio.h>

void resistance_tolernaces()
{
  double set_of_resistors[] = {470,
                              2000,
                              68,
                              550,
                              620,
                              1000,
                              510};
  double resistor_low = 0.0,
         resistor_high = 0.0,
         toleranace_value = 0.0;
printf("\n\n");
for(int count = 0; count < 7; count++)
{
  toleranace_value = set_of_resistors[count] *5/100;
  resistor_low = set_of_resistors[count] - toleranace_value;
  resistor_high = set_of_resistors[count] + toleranace_value;

  printf("The tolerance range of %.4lf resistor is %.4lf - %.4lf \n\n",
          set_of_resistors[count], resistor_low, resistor_high);
}


}
