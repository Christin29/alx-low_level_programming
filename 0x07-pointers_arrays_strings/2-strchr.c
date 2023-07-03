#include "main.h"
#include <stddef.h>
/**
*_strchr - searches for the first occurrence of the character c in the string
*@s: - address of a character in memory
*@c: - character to be located
*Return: 0
*/
char *_strchr(char *s, char c)
{
int v = 0;
for (; s[v] >= '\0'; v++)
{
if (s[v] == c)
return (&s[v]);
}
return (0);
}
