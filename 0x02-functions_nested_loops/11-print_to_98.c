#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n){

    if (n < 98)
    {
        while (n <= 98)
        {
            printf("%d, ", n);
            n++;
        }
        printf("\n");
    }
    else if (n == 98)
    {
        printf("%d",n);
        printf("\n");

    }
    else if (n > 98)
    {
        while (n >= 98)
        {
            printf("%d ,",n);
            n--;
        }
        printf("\n");
    }
    else if (n < 0)
    {
        while (n <= 98)
        {
            printf("%d ,",n);
            n++;
        }
        printf("\n”");
    }
    
};