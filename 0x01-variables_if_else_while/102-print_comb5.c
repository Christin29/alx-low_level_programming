#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	c = 0;
	d = 1;

	for (a = c; a <= 99; a++)
	{
		for (b = d; b <= 99; b++)
		{
			if (b > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
		}
		c++;
		d++;
	}
	putchar('\n');
	return (0);
}
