#include "main.h"
/**
*_memset - fill a block of memory
*@s: - pointer to the memory
*@b: - value to be set
*@n: - number of bytes
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int v;
for (v = 0; v < n; v++)
{
s[v] = b;
}
return (s);
}
