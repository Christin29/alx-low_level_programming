#include "main.h"
int strlen_no_wilds(char *str);
void iterate_ver(char **ver);
char *veronica_match(char *str, char *veronica);
int wildcmp(char *s1, char *s2);
/**
* strlen_no_wilds - Returns the length of a string,
* @str: The string to be measured.
* Return: The length.
*/
int strlen_no_wilds(char *str)
{
int len = 0, index = 0;
if (*(str + index))
{
if (*str != '*')
len++;
index++;
len += strlen_no_wilds(str + index);
}
return (len);
}
/**
* iterate_ver - Iterates through a string located at a wildcard
* @ver: The string to be iterated through.
*/
void iterate_ver(char **ver)
{
if (**ver == '*')
{
(*ver)++;
iterate_ver(ver);
}
}
/**
* veronica_match - Checks if a string str matches the postfix
* @str: The string to be matched.
* @veronica: The name
* Return: If str and postfix are identical - a pointer to the null byte
*/
char *veronica_match(char *str, char *veronica)
{
int str_len = strlen_no_wilds(str) - 1;
int veronica_len = strlen_no_wilds(veronica) - 1;
if (*veronica == '*')
iterate_ver(&veronica);
if (*(str + str_len - veronica_len) == *veronica && *veronica != '\0')
{
veronica++;
return (veronica_match(str, veronica));
}
return (veronica);
}
/**
* wildcmp - Compares two strings, considering wildcard characters
* @s1: The first string to be compared
* @s2: The second string to be compared - may contain ver
* Return: If the strings can be considered identical - 1
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
iterate_ver(&s2);
s2 = veronica_match(s1, s2);
}
if (*s2 == '\0')
return (1);
if (*s1 != *s2)
return (0);
return (wildcmp(++s1, ++s2));
}
