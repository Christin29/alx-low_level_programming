#include "main.h"
#include <string.h>
/**
*_strpbrk - searches a string
* @s: string input
* @accept: accepted variable
* Return: Always Success
*/
char *_strpbrk(char *s, char *accept)
{
int v;
while (*s)
{
for (v = 0; accept[v]; v++)
{
if (*s == accept[v])
return (s);
}
s++;
}
return (NULL);
}
