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
s = (char *)malloc(strlen(str) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
strcpy(s, str);
return (s);
}
