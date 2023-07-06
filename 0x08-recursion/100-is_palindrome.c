#include "main.h"
/**
*last_index - shows the index
*@s: string pointer
*Return: integer
*/
int is_palindrome(char *s);
int check(char *s, int vstart, int vend, int pair);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}
/**
*is_palindrome - check if a string is palindrome
*@s: string pointer
*Return: 0 or 1
*/
int is_palindrome(char *s)
{
int vend = last_index(s);
return (check(s, 0, vend - 1, vend % 2));
}
/**
*check - checker for the palindrome
*@s: string pointer
*@vstart: integer moving
*@vend: integer moves
*@pair: integer
*Return: 0 or 1
*/
int check(char *s, int vstart, int vend, int pair)
{
if ((vstart == vend && pair != 0) || (vstart == vend + 1 && pair == 0))
return (1);
if (s[vstart] != s[vend])
return (0);
else
return (check(s, vstart + 1, vend - 1, pair));
}
