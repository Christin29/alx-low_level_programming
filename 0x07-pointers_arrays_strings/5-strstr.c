#include "main.h"
#include <string.h>

/**
* _strstr - locates a substring
*@haystack: Origin
*@needle: the substring
*Return: Always Success
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *ver = haystack;
char *Ak = needle;
while (*ver == *Ak && *Ak != '\0')
{
ver++;
Ak++;
}
if (*Ak == '\0')
return (haystack);
}
return (NULL);
}
