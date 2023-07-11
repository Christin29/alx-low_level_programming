#include "main.h"
/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int v, concat_v = 0,  b = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (v = 0; s1[v] || s2[v]; v++)
b++;
concat_str = malloc(sizeof(char) * b);
if (concat_str == NULL)
return (NULL);
for (v = 0; s1[v]; v++)
concat_str[concat_v++] = s1[v];
for (v = 0; s2[v]; v++)
concat_str[concat_v++] = s2[v];
return (concat_str);
}

