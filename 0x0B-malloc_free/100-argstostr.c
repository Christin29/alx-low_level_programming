#include "main.h"
#include <stdlib.h>
/**
*argstostr - concatenates all the arguments of a program.
*@ac: argument count.
*@av: argument vector.
*Return: pointer of an array of char
*/
char *argstostr(int ac, char **av)
{
char *ver;
int v, i, j, va;
if (ac == 0)
return (NULL);
for (v = i = 0; i < ac; i++)
{
if (av[i] == NULL)
return (NULL);
for (j = 0; av[i][j] != '\0'; j++)
v++;
v++;
}
ver = malloc((v + 1) * sizeof(char));
if (ver == NULL)
{
free(ver);
return (NULL);
}
for (i = j = va = 0; va < v; j++, va++)
{
if (av[i][j] == '\0')
{
ver[va] = '\n';
i++;
va++;
j = 0;
}
if (va < v - 1)
ver[va] = av[i][j];
}
ver[va] = '\0';
return (ver);
}
