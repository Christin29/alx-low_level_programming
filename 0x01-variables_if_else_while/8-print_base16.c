#include <stdio.h>

/**
 * main - prints numbers of base sixteen in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (num = 0; num < 6; num++)
	{
		putchar(num + 'a');
	}
	putchar('\n');
	return (0);
}
