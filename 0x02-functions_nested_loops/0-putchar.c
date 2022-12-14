#include <stdio.h>
#include "main.h"

int main (void)
{
    char _str[10] = "_putchar";
    int i;

    for ( i = 0; i < 8; i++)
    {
        _putchar(_str[i]);
    
    }
    _putchar(10);    
    return (0);
}