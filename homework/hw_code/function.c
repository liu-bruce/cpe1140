#include "function.h"
#include <stdio.h>

double set_of_resitors [] = {1000000.0,
                            2200000.0};

double parallel()
{
  double parallel_equavelent = 0.0,
         temp = 0.0;


  for(int count = 0 ; count < 2; count++)
  {
    temp += 1/set_of_resitors[count];
  }
  parallel_equavelent = 1/temp;
    printf("\n\nThe parallel equavelent is: %.5lf\n\n",parallel_equavelent );
  return parallel_equavelent;
}

void current_divder()
{
  double parallel_equavelent = parallel(),
         source_current = 1/100000.0,
         resistor_ratio = 0.0,
         branch_current = 0.0,
         power = 0.0;


         for(int count = 0; count < 2; count++)
         {
           resistor_ratio = parallel_equavelent / set_of_resitors[count];
           branch_current = resistor_ratio * source_current ;
           power = set_of_resitors[count]* branch_current*branch_current;

           printf("\n\nThe current of the resitor %.4lf is : %.9lf micro Amps the power is %.8lf watts\n\n", set_of_resitors[count], branch_current*1000000,power*1000000);
         }



}
void parallel_calculation()
{
  double parallel_equavelent = 0.0,
         temp = 0.0;
  double set_of_resitors_internal [] = {1000000.0,
                              470000.0,
                              1000.0,
                              2700000.0};

  for(int count = 0 ; count < 2; count++)
  {
    temp += 1/set_of_resitors_internal[count];
  }
  parallel_equavelent = 1/temp;
  printf("\n\nThe parallel equavelent is: %.5lf\n\n",parallel_equavelent );
}
