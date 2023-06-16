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
	int h;
	int i;
	int j;

	h = 0;
	for (a = h; a <= 9; a++)
	{
		i = h + 1;
		j = h + 2;
		for (b = i; b <= 9; b++)
		{
			for (c = j; c <= 9; c++)
			{
				if (a >= 0 && b >= 1 && c > 2)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
			}
			i++;
			j++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}
