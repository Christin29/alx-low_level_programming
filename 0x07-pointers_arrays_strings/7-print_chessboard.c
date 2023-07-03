#include "main.h"
/**
*print_chessboard - Entry point
*@a: array
*Return: Always 0 (Success)
*/
void print_chessboard(char (*a)[8])
{
int v;
int g;

for (v = 0; v < 8; v++)
{
for (g = 0; g < 8; g++)
_putchar(a[v][g]);
_putchar('\n');
}
}
