#include "main.h"
#include <string.h>

/**
 *string_nconcat - function that concatenates two strings.
 *@s1: parametre 1
 *@s2: parametre 2
 *@n : parametre 3
 *
 *Return:return a value wich type is char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i;
unsigned int len1;
unsigned int len2;
if (s1 == NULL)
{
s1 = "";
}
else
len1 = strlen(s1);
if (s2 == NULL)
{
s2 = "";
}
else
len2 = strlen(s2);
s = malloc(len1 + n + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len1; i++)
{
s[i] = s1[i];
}
if (n < len2)
{
for (i = 0; i < n; i++)
{
s[i + len1] = s2[i];
}
s[len1 + n] = '\0';
}
else
{
strcpy(s, s2);
s[len1 + len2] = '\0';
}
return (s);
}
