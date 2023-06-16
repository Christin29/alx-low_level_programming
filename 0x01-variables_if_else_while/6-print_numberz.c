#include <stdio.h>

/**
 * main - prints digists without the char variables
 *
 * Return; Always 0 (success)
 */
int main(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
