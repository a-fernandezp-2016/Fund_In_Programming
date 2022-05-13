/*  Make a program that checks whether a word is a palindrome (maximum of 10 letters). A
palindrome is a word that reads the same backwards as forwards, such as anna. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes....
#define MAX_CHAR 11

void main()
{
    //To declare an array for saving the string.
    char word[MAX_CHAR];

    //To declare other variables...
    int i, j, counter = 0, check_palin = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Palindrome WORDS $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("Please, introduce a word of maximum 10 letters: ");
    fflush(stdin);
    fgets(word,MAX_CHAR,stdin);

    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(word[i] == '\n')
        {
            word[i] = '\0';
        }
    }

    //To find the final of the word...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(word[i] == '\0')
        {
            i = MAX_CHAR;
        }
        else
        {
            counter += 1;
        }
    }

    //To use the method to check if it is palindrome...
    j = counter-1;
    for(i=0; i<counter; i++)
    {
        if(word[i] != word[j] && i<j)
        {
            check_palin = 1;
        }
        j--;
    }

    //To print the palindrome word...
    if(check_palin == 1)
    {
        printf("\n\nThe word %s is NOT a PALINDROME.\n\n", word);
    }
    else
    {
        printf("\n\nThe word %s is a PALINDROME.\n\n", word);
    }
}
