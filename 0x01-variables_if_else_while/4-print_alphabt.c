#include <stdio.h>

/**
 * main - excluding some alphabetic characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	if (alp != 'q' && alp != 'e')
	{
		putchar(alp);
	}
	}
	putchar('\n');
	return (0);
}
