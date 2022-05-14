/*  Make a program that takes a word and a letter and then counts how many times does the letter
appear in the word. If the letter is not found in the word display the message that it was not
found. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes....
#define MAX_CHAR 16

void main()
{
    //To declare an array for saving the string.
    char word[MAX_CHAR];
    char letter;

    //To declare other variables...
    int i, counter = 0, times = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Finding a letter in a word $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("Please, write a word of maximum 15 characters: ");
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

    do
    {
        printf("Please, write a letter: ");
        scanf(" %c", &letter);

    }while((letter < 'A') || (letter > 'Z' && letter < 'a') || (letter > 'z'));

    //To find the length of the word...
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

    //To find the letter in the word...
    for(i=0; i<counter; i++)
    {
        if(word[i] == letter)
        {
            times += 1;
        }
    }

    //To print the number of times that the letter appear in the word...
    if(times == 0)
    {
        printf("\n\nThe letter does not appear any time in the word.\n\n");
    }
    else if(times == 1)
    {
        printf("\n\nThe letter appears %d time in the word.\n\n", times);
    }
    else
    {
        printf("\n\nThe letter appears %d times in the word.\n\n", times);
    }
}
