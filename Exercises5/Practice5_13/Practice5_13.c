/* 5.13. Program about making a program that prompts the user for a number and depending on the number draws the following table: ...*/
#include <stdio.h>

void main()
{
    //To declare the number variable, and the counters i and j.
    int num, i, j;

    //Start the program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$ DIAMOND OF NUMBERS $$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");

    //To do the iterations and to print the results....
    do
    {
        printf("\n\nPlease, introduce a number: \n\n");
        scanf("%d", &num);
        if(num < 1)
        {
            printf("\n\nINCORRECT: YOU CANNOT INTRODUCE A NUMBER LESS THAN 1.\n");
            printf("PLEASE, INTRODUCE AGAIN THE NUMBER.\n\n");
        }
        else if(num == 1)
        {
            printf("\n\n");
            printf("%d", num);
            printf("\n\n");
        }
        else
        {
            printf("\n\n");
            for(i=1; i<num*2; i++)
            {
                for(j=1; j<num*2; j++)
                {
                    if(i==num && j==num)
                    {
                        printf("%d", num);
                    }
                    else if((i==num && j<num) || () || )
                    {

                    }
                }
                printf("\n");
            }
            printf("\n\n");
        }

    }while(num < 1);
}
