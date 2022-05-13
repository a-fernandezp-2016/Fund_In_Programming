/*  Make a program that takes a string and writes out the numbers in the string (maximum of 15
characters). */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes....
#define MAX_CHAR 16

void main()
{
    //To declare an array for saving the string.
    char tweet[MAX_CHAR];

    //To declare other variables...
    int i, counter = 0, sum = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Numbers in a String $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("Please, write your Tweet of maximum 15 characters: ");
    fflush(stdin);
    fgets(tweet,MAX_CHAR,stdin);

    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(tweet[i] == '\n')
        {
            tweet[i] = '\0';
        }
    }

    //To find the final of the string...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(tweet[i] == '\0')
        {
            i = MAX_CHAR;
        }
        else
        {
            counter += 1;
        }
    }

    //To use the method to count the numbers that there are in the string...
    for(i=0; i<counter; i++)
    {
        if(tweet[i] >= '0' && tweet[i] <= '9')
        {
            sum += 1;
        }
    }

    //To print the palindrome word...
    printf("\n\nIn the string %s there are %d numbers.\n\n", tweet, sum);
}
