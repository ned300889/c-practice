#include <stdio.h>

/* print Fahrenheit-Celcius table
    for fahr = 0 , 20 , ... , 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* Lower limit of temperature table */
    upper = 300;    /* Upper limit of temperature table */
    step = 20;      /* Step size */ 

    fahr = lower;

    printf("Fahr \t Celsius\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}