/*   Make a program that changes digits in a string into their word-representation (only digits 0-
9). For example: 5 euros should be changed to five euros. */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//To define ctes....
#define MAX_CHAR 21

void main()
{
    //To declare an array for saving the string.
    char string[MAX_CHAR];
    char aux;
    char word[MAX_CHAR];

    //To declare other variables...
    int i, counter = 0, pos_init = 0, cont = 0;

    //Start the Program....
    printf("\n\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$ Number - Word Representation $$$$$$$$$");
    printf("\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf("\n");
    printf("Please, write a price between 0 and 9, and the currency in words: ");
    fflush(stdin);
    fgets(string,MAX_CHAR,stdin);
    //To change the \n by \0...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(string[i] == '\n')
        {
            string[i] = '\0';
        }
    }

    //To find the length of the string...
    for(i=0; i<MAX_CHAR; i++)
    {
        if(string[i] == '\0')
        {
            i = MAX_CHAR;
        }
        else
        {
            counter += 1;
        }
    }

    //To find the number character to change to a word-representation...
    for(i=0; i<counter; i++)
    {
        if(string[i] >= '0' && string[i] <= '9')
        {
            aux = string[i];
        }
        else if(string[i] >= 'a' && string[i] <= 'z')
        {
            word[cont] = string[i];
            cont++;
        }
    }

    //To put the price in words...
    switch(aux)
    {
        case '0':
            string[MAX_CHAR] = "zero";
            break;
        case '1':
            string[MAX_CHAR] = "one";
            break;
        case '2':
            string[MAX_CHAR] = "two";
            break;
        case '3':
            string[MAX_CHAR] = "three";
            break;
        case '4':
            string[MAX_CHAR] = "four";
            break;
        case '5':
            string[MAX_CHAR] = "five";
            break;
        case '6':
            string[MAX_CHAR] = "six";
            break;
        case '7':
            string[MAX_CHAR] = "seven";
            break;
        case '8':
            string[MAX_CHAR] = "eight";
            break;
        case '9':
            string[MAX_CHAR] = "nine";
            break;
    }
    for(i=0; i<MAX_CHAR; i++)
    {
        if(string[i] == '\0')
        {
            string[i] = ' ';
            pos_init = i + 1;
            i = MAX_CHAR;
        }
    }
    printf("%s", string);
    /*for(i=0; i<=cont; i++)
    {
        string[pos_init] = word[i];
        pos_init++;
    }
    string[pos_init] = '\0';

    //To print the price and the currency in words...
    printf("\n\nYour string has changed to: %s.\n\n", string);*/
}
