#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints a sum of 3 diagonals
*@a: Variable
*@size: size of the variable
*Return: Always Success
*/
void print_diagsums(int *a, int size)
{
int v, w, sum1 = 0, sum2 = 0;
for (v = 0; v <= (size * size); v = v + size + 1)
sum1 = sum1 + a[v];
for (w = size - 1; w <= (size * size) - size; w = w + size - 1)
sum2 = sum2 + a[w];
printf("%d, %d\n", sum1, sum2);
}
