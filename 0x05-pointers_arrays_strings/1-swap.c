#include <stdio.h>
/*
Write a function that swaps the 
values of two integers.
*/
void swap_int (int *a, int *b)
{
int temporary;
temporary = *b;
*b = *a;
*a = temporary;
}
