#include "main.h"
/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*Return: pointer to the array
*/
int **alloc_grid(int width, int height)
{
int **ver;
int v = 0, j;
if (width == 0 || height == 0)
return (NULL);
ver = (int **) malloc(sizeof(int *) * height);
if (ver != NULL)
{
for (; v < height; v++)
{
ver[v] = (int *) malloc(sizeof(int) * width);
if (ver[v] != NULL)
{
for (j = 0; j < width; j++)
ver[v][j] = 0;
}
else
{
while (v >= 0)
{
free(ver[v]);
v--;
}
free(ver);
return (NULL);
}
}
return (ver);
}
else
{
return (NULL);
}
}
