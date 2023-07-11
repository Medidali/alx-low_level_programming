#include "main.h"
#include <string.h>
/**
*_strdup - function returns a pointer to the duplicated string
*@str: a string parametre
*
*Return: return a duplicate of the string @str
*/
char *_strdup(char *str)
{
char *s;
int i;
if (str == NULL)
{
return (NULL);
}
size_t len = strlen(str);
s = (char *)malloc((len * sizeof(char)) + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
s[i] = str[i];
s[len] = '\0';
return (s);
}
