#include <stdio.h>
#include "main.h"

int main (void)
{
    char _str[9] = "_putchar";
    int i;

    for ( i = 0; i < 9; i++)
    {
        _putchar(_str[i]);
    
    }
    _putchar(9);    
    return (0);
}