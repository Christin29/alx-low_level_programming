#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
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
	for (a = c; a <= 9; a++)
	{
		for (b = d; b <= 9; b++)
		{
			if (a >= 0 && b > 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(a + '0');
			putchar(b + '0');
		}
		c++;
		d++;
	}
	putchar('\n');
	return (0);
}
