#include "main.h"
/**
*_memcpy - copy the string from dest to src
*@dest: - destination of string
*@src: - source of string
*@n: - number of bytes
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int v;
for (v = 0; v < n; v++)
{
dest[v] = src[v];
}
return (dest);
}
