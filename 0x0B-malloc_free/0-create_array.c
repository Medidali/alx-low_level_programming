#include "main.h"

/**
 *create_array - function that create an array of caractere
 *@size: lentgh of array
 *@c: specific char
 *
 *Return: return a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;

s = (char *)malloc((size) * sizeof(char));
if (size == 0)
{
return (NULL);
}
if (s == NULL)
{
return (NULL);
}
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
