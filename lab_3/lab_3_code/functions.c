#include <stdio.h>
#include "fucntions.h"
double set_of_resistors [] = {510.0,
                             1000.0,
                             2000.0};

void resistor_tolernaces()
{
  double tolerance_low_buffer = 0.0,
         tolerance_high_buffer = 0.0,
         tolerance_percentage = 5.0/100.0,
         tolerance_value = 0.0;
printf("\n\n");
for (int count = 0 ; count < 3 ; count ++ )
    {
      tolerance_value = set_of_resistors [count] * tolerance_percentage;
      tolerance_low_buffer = set_of_resistors [count] - tolerance_value;
      tolerance_high_buffer = set_of_resistors [count] + tolerance_value;

      printf("The tolerance is ranges of the %.5lf resistor is %.5lf -%.5lf \n\n"
            ,set_of_resistors[count],tolerance_low_buffer,tolerance_high_buffer );

    }
}


void parallel_resistors()
{

  double parallel_equavalent_resistor = 1.0,
         temp = 0.0,
         current_ohm_law = 0.0,
         current_sum = 0.0,
         current_of_resitor = 0.0,
         power = 0.0,
         source_voltage = 5.0,
         tolernace_percentage = 5.0/100.0,
         parallel_resistors_low = 0.0,
         parallel_resistors_high = 0.0,
         parallel_resistors_tolerance_value = 0.0;

  printf("\n\n" );
  for(int count = 0 ; count < 3 ; count++)
  {
    temp += 1/set_of_resistors[count];
    current_of_resitor = source_voltage /set_of_resistors[count]*1000.0;
    current_sum += current_of_resitor;
    power = source_voltage * current_of_resitor;
    printf("The current of the %.6lf resistor is %.6lf miliamps\n\n"
           "the power disapated %.6lf miliwatts\n\n"
          ,set_of_resistors[count],current_of_resitor,
          power
        );
  }

  parallel_equavalent_resistor = 1/ temp;
  current_ohm_law = source_voltage/parallel_equavalent_resistor*1000;
  parallel_resistors_tolerance_value = parallel_equavalent_resistor * tolernace_percentage;
  parallel_resistors_low = parallel_equavalent_resistor - parallel_resistors_tolerance_value;
  parallel_resistors_high = parallel_equavalent_resistor + parallel_resistors_tolerance_value;

  printf("\n\nThe parallel equavalent resistance is %.5lf ranges %.5lf - %.5lf\n\n"
        "The expected sum of current is %.5lf\n\n"
        "The sum of currents is %.5lf\n\n "
        ,parallel_equavalent_resistor,parallel_resistors_low,parallel_resistors_high
        ,current_ohm_law
        ,current_sum);


}
