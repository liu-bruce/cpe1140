#include "functions.h"
#include <stdio.h>
#include <math.h>


void power_caluculation()
{
  double set_of_resistors[] = { 470,
                                620,
                                1000};
double  current = 0.002,
        power_consumption = 0.0,
        current_squared = pow(current, 2.0);

        for (int count = 0 ; count < 3 ; count++)
        {
          power_consumption = set_of_resistors[count] * current_squared;
          printf("\n\n The power consumption of the %lf ohm is: %lf watts\n\n  ", set_of_resistors[count], power_consumption);
        }

}

void sum_of_measured_resistors()
{
  double set_of_measured_resistors [] = {466.050,
                                         618.560,
                                         992.410};
  double resistor_measured_series = 0.0;

  for (int count = 0; count < 3 ;count ++ )
  {
    resistor_measured_series += set_of_measured_resistors[count];

  }

  printf("The sum of all resistor measured and therefore the predicted series %.3lf \n\n", resistor_measured_series);

}
void resistor_tolerance_range()
{
  double set_of_resistors[] = {470.0,
                               620.0,
                               1000.0,
                               2090};

    double
          Five_percent = 5.0/100.0,
          resistor_differance = 0.0,
          resisitor_range_low = 0.0,
          resisitor_range_high = 0.0;

          for (int count = 0 ; count < 4; count++ )
          {
              resistor_differance = set_of_resistors[count] * Five_percent;
              resisitor_range_low = set_of_resistors[count] - resistor_differance;
              resisitor_range_high = set_of_resistors[count] + resistor_differance;
            printf("\n\nresistor tolerance range of %.3lf  \n\n"
                   "low %.3lf \n\n"
                   "high %.3lf \n\n",
                   set_of_resistors[count],
                   resisitor_range_low,
                   resisitor_range_high
                  );
          }

}

void voltage_divder()
{
  double set_of_resistors [] = {470.0,
                                620.0,
                                1000.0},
         series_of_resistors = 2090,
         source_voltage = 5.0,
         voltage_target_resisitor = 0.0;


  for (int count = 0 ; count < 3 ; count++ )
  {
    voltage_target_resisitor = source_voltage * set_of_resistors[count]/series_of_resistors;
    printf("the expected voltage of %.3lf ohm resisitors is about %.3lf volts \n",
           set_of_resistors[count], voltage_target_resisitor
          );
  }

}

void source_current_series()
{
  double value_of_sum_of_resistors = 2090.000,
         source_voltage = 5.0,
         expected_current = 0.0;

         //v=iR
         //v/R = i
expected_current = source_voltage / value_of_sum_of_resistors;
printf("The expected current is about :%.3lf \n", expected_current);

}

void sum_of_resisitors()
{
  double set_of_resistors [] = {470.0,
                                620.0,
                                1000.0},
         series_of_resistors = 0.0;


         for(int count = 0; count < 3 ; count++)
         {
           series_of_resistors += set_of_resistors[count];
         }
  printf("The the sum of resisitors are : %.3lf\n",series_of_resistors);


}


void hello_world()
{
  printf("hello world");
}
