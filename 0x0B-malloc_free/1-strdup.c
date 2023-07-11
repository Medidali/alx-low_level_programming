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
int len = strlen(str);
s = (char *)malloc((len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (s == NULL)
{
return (NULL);
}
strcpy(s, str);
return (s);
}
