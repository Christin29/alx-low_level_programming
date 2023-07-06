#include "main.h"
#include <stdio.h>
/**
*factorial - function returns the factorial of a number
*@n: number for which a factorial is determined
*Return: -1 to indicate an error, factorial for success
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
