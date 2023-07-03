#include "main.h"
/**
*_strspn - calculates the length of the prefix
*@s: - bytes from the string
*@accept: - define the characters
*Return: n
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int v;
while (*s)
{
for (v = 0; accept[v]; v++)
{
if (*s == accept[v])
{
n++;
break;
}
else if (accept[v + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
