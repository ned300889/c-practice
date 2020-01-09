#include <stdio.h>

#define LOWER   0
#define UPPER   200
#define STEP    20


float temp(float f);


/* print Fahrenheit-Celcius table
    for fahr = 0 , 20 , ... , 300 */
main()
{
    int fahr;

    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d %6.1f\n", fahr, temp(fahr));
}


float temp(float fahr)
{
    int i;

    i = (5.0/9.0)*(fahr-32);
    return i;
}