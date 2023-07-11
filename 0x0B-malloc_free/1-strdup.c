#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*Return: NULL in case of error, pointer to allocated
*space
*/
char *_strdup(char *str)
{
char *ver;
int v, b;
if (str == NULL)
return (NULL);
for (v = 0; str[v]; v++)
b++;
ver = malloc(sizeof(char) * (b + 1));
if (ver == NULL)
return (NULL);
for (v = 0; str[v]; v++)
{
ver[v] = str[v];
}
ver[b] = '\0';
return (ver);
}

