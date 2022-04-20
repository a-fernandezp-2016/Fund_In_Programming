/* 5.10. Program about making a program that prompts the user for a decimal integer and turns it into a binary number.*/
#include <stdio.h>
#include <math.h>

void main()
{
    //To declare a introduced integer number by the user, a Quotient variable, a Residu variable, a auxiliar variable, a counter i and a times that it is going to divide variable.
    int num, quotient, residu, aux, i, times = 0;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ CONVERTION FROM DECIMAL TO BINARY $$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\nPlease, introduce a number: ");
    scanf("%d", &num);

    //To do the iterations and to get the first and the second value of the binary number.
    aux = num;
    do
    {
        quotient = aux / 2;
        residu = aux % 2;
        times += 1;
        aux = quotient;

    }while(quotient > 1);

    //To get the rest of the values of the binary number. And to print the results.
    printf("\n\n The number %d in binary is: %d%d", num, quotient, residu);
    for(i=1; i<=times; i++)
    {
        num = 2 * quotient + residu;
        if(num % 2 == 0)
        {
            printf("0");
        }
        else if(num % 2 == 1)
        {
            printf("1");
        }
        num /= 2;
    }
    printf("\n\n");
}
