/* 3.9. Program about making a program to transfer length given in cm into equivalent lenght given in feet and inches.
– 1 inch = 2.54 cm
– 1 feet = 12 inch. */
#include <stdio.h>

//To declare the const of converting to inch and to feet.
#define CTE_CM 2.54
#define CTE_INCH 12.0

void main()
{
    //To declare the variable of seconds, minutes and hours.
    float length_measure_cm, length_measure_inch, length_measure_feet;

    //Start the program.....
    printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$$$$$$$ LENGTH CONVERTER $$$$$$$$$$\n\n");
    printf("Please, introduce the measure of length in CM: ");
    scanf("%f", &length_measure_cm);

    //Doing operations.....
    printf("\n\n\tDoing the Length Converter operations....\n\n");
    length_measure_inch = length_measure_cm / CTE_CM;
    length_measure_feet = length_measure_inch / CTE_INCH;

    //Print the stopwatch....
    printf("\n\n%g cm <=> %g inch <=> %g feet\n\n", length_measure_cm, length_measure_inch, length_measure_feet);
}
