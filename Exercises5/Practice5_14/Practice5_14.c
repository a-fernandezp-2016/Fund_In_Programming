/* 5.14. Program about making a program that uses a for loop make a program that will print out the multiplication table in the following format: ... */
#include <stdio.h>

void main()
{
    //To declare the previous, the actual and an auxiliar variable.
    int pre = 0, actual = 1, aux;
    //To declare the n numbers that the user wants to introduce by keyboard. And the counter i variable.
    int n, i;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ MULTIPLICATION TABLE $$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("Please, introduce a number: ");
    scanf("%d", &n);

    //Doing the operations and printing the results...
    printf("\n\nThe Fibonacci sequence is: %d,%d", pre, actual);
    if(n != 0)
    {
        printf(",");
    }
    for(i=1; i<=n; i++)
    {
        aux = actual;
        actual = pre + actual;
        pre = aux;
        if(i != n)
        {
            printf("%d,", actual);
        }
        else
        {
            printf("%d", actual);
        }
    }
    printf("\n\n");
}
