#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void){

    char ch;

    for (ch = 'a'; ch <='z';ch++)
    {
        printf("%c", ch);  
    }
    printf("\n") ;
};