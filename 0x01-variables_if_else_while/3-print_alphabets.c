#include <stdio.h>

/**
 * main - prints lowercase then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26]
	int i;

	for (i = 'a'; i <= 'Z'; i++)
	{
		putchar(alp[i]);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
