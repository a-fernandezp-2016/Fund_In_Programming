/* 5.15. Program about making a program that uses a for loop make a calendar for a specific month. Prompt the user for how many days are in the
month and on which day it begins (which day of the week is the first in the month). Print the table in
the following format: ... */
#include <stdio.h>

//To define ctes...
#define SEVENDAYS 7

void main()
{
    //To declare a variable for days and for names of the week.
    int days, pos_week;
    //To declare the counters i and j. And the count to print every days.
    int i, j, count;

    //Start the program....
    do
    {
        printf("\n\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf("\n");
        printf("$$$$$$$$ CALENDAR OF A MONTH $$$$$$$$");
        printf("\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf("\n");
        printf("How many days does the month have? : ");
        scanf("%d", &days);
        do
        {
            printf("###################################");
            printf("\n");
            printf("######### DAYS OF THE WEEK ########");
            printf("\n");
            printf("###################################");
            printf("\n");
            printf("# 1. Monday.                      #");
            printf("\n");
            printf("# 2. Tuesday                      #");
            printf("\n");
            printf("# 3. Wednesday.                   #");
            printf("\n");
            printf("# 4. Thursday.                    #");
            printf("\n");
            printf("# 5. Friday.                      #");
            printf("\n");
            printf("# 6. Saturday.                    #");
            printf("\n");
            printf("# 7. Sunday.                      #");
            printf("\n");
            printf("###################################");
            printf("Which is the first day of the week? : ");
            scanf("%d", &pos_week);

            //Doing the operations and printing the results...
            if((pos_week < 1) || (pos_week > 7))
            {
                printf("\n\nTHERE IS NO EXIST THAT DAY OF THE WEEK, SORRY.");
                printf("\nTRY AGAIN!\n\n");
            }
            else
            {
                if((days < 28) || (days > 31))
                {
                    printf("\n\nYou only can introduce the numbers: 28, 29, 30 or 31.\nTRY AGAIN!\n\n");
                }
                else
                {
                    printf("\n\n");
                    for(i=1; i<=6; i++)
                    {
                        for(j=1; j<=SEVENDAYS; j++)
                        {
                            if(i == 1)
                            {
                                printf("Mon Tue Wed Thu Fri Sat Sun");
                            }
                            else
                            {
                                if(j == 1)
                                {
                                    j *= pos_week;
                                    for(count=1; count<=days; count++)
                                    {
                                        printf("%4.d", count);
                                    }
                                }
                            }
                        }
                        printf("\n");
                    }
                }
            }
        }while((pos_week < 1) || (pos_week > 7));
    }while((days < 28) || (days > 31));
}
