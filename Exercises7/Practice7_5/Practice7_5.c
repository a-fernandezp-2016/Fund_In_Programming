/*  Make the program that takes two words from the user, and concatenates them to a string with
a space in between and then display the final string. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes....
#define MAX_CHAR 16
#define MAX_FINAL 32

void main()
{
    //To declare an array for saving the string.
    char wordA[MAX_CHAR];
    char wordB[MAX_CHAR];
    char stringFinal[MAX_FINAL];

    //To declare other variables...
    int i, j = 0, counterA = 0, counterB = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Concatenate two words in a string between one space $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("Please, write the first word of maximum 15 characters: ");
    fflush(stdin);
    fgets(wordA,MAX_CHAR,stdin);
    printf("Please, write the second word of maximum 15 characters: ");
    fflush(stdin);
    fgets(wordB,MAX_CHAR,stdin);

    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(wordA[i] == '\n')
        {
            wordA[i] = '\0';
        }
        if(wordB[i] == '\n')
        {
            wordB[i] = '\0';
        }
    }

    //To find the length of the word A...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(wordA[i] == '\0')
        {
            i = MAX_CHAR;
        }
        else
        {
            counterA += 1;
        }
    }

    //To find the length of the word B...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(wordB[i] == '\0')
        {
            i = MAX_CHAR;
        }
        else
        {
            counterB += 1;
        }
    }

    //To concatenate the words in a string between one space...
    for(i=0; i<MAX_FINAL; i++)
    {
        if(i < counterA)
        {
            stringFinal[i] = wordA[i];
        }
        else if(i == counterA)
        {
            stringFinal[i] = ' ';
        }
        else if(j < counterB)
        {
            stringFinal[i] = wordB[j];
            j++;
        }
        else
        {
            stringFinal[i] = '\0';
            i = MAX_FINAL;
        }
    }

    //To print the the concatenated words in a string between one space...
    printf("\n\nThe concatenated string is: %s.\n\n", stringFinal);
}
