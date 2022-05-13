/*  Make a program that takes a word and writes it out backwards (maximum of 10 letters).
(word: program would be: margorp). */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes....
#define MAX_CHAR 11

void main()
{
    //To declare an array for saving the string.
    char word[MAX_CHAR];

    //To declare other variables...
    char aux;
    int i, j, counter = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ BACKWARDS WORDS $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
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

    //To use the bubble method to change the letter positions...
    j = counter-1;
    for(i=0; i<counter; i++)
    {
        if(i < j)
        {
            aux = word[i];
            word[i] = word[j];
            word[j] = aux;
            j--;
        }
    }

    //To print the backward word...
    printf("\n\nThe backward word is: %s.\n\n", word);
}
