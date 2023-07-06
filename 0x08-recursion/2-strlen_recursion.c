#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - counts the length of a string
*@s: string whose length is to be counted
*Return: the length of a string
*/
int _strlen_recursion(char *s)
{
int length = 0;
if (*s)
{
length++;
length += _strlen_recursion(s + 1);
}
return (length);
}
