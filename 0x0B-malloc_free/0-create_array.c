#include "main.h"
/**
* create_array - creates an array of chars, and
* initializes it with a specific char
*@size: Size of the array
*@c: Character to insert
*Return: NULL if size is zero or if it fails,
*pointer to array if everything is normal
*/
char *create_array(unsigned int size, char c)
{
char *ver;
unsigned int v;
ver = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
if (ver == NULL)
return (NULL);
for (v = 0; v < size; v++)
ver[v] = c;
return (ver);
}

