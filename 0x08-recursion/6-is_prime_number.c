#include "main.h"
#include <stdio.h>
/**
*is_prime_number - check if n is a prime number
*@resp:result of the prime number check
*@n: number to be checked for primality
*Return: 0 or 1
*/
int check_prime(int n, int resp);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
/**
*check_prime - checks whether a given number n is a prime number
*@n:the number to be checked for primality
*@resp: result of the prime number check
*Return: n
*/
int check_prime(int n, int resp)
{
if (resp >= n && n > 1)
return (1);
if (n % resp == 0 || n <= 1)
return (0);
else
return (check_prime(n, resp + 1));
}
