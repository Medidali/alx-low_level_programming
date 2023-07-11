#include "main.h"
#include <string.h>
/**
*str_concat - function concatenates two strings
*@s1: parametre char passed to function
*@s2: parametre char passed to function
*
*Return: return string
*/
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1, len2;

len1 = strlen(s1);
len2 = strlen(s2);
concat = (char *)((sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
{
return (NULL);
}
concat = strcat(s1, s2);
return (concat);
}
