#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - gets character string
*
* @s: character to getstring
* Return: returns length
*/
int _strlen (char *s)
{
int i=0;
int j;
for (j = 0; s[j] != '\0'; j++)
i++;
return (i);
}
