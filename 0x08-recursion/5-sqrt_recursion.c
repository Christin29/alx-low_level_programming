#include "main.h"
/**
*sqrt2 - possibilite to evaluate from 1 to n
*@a: number as n
*@b: number iteratarating from 1 to n
*Return: 1 on success
*On error, -1 is returned, and errno is set
*/
int sqrt2(int a, int b)
{
if (b * b == a)
return (b);
if (b * b > a)
return (-1);
return (sqrt2(a, b + 1));
}
/**
* _sqrt_recursion - returns square root of n
*@n: Integer
*Return: On success 1, On error, -1 is returned, and errno is set
*/
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}
