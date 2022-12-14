#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void){

    char ch;
    int i=1;

    while (i<=10)
    {
        for (ch = 'a'; ch<= 'z'; ch++)
        {
            putchar("%c", ch);
        }
        putchar(10)        
        i++;        
    }
};