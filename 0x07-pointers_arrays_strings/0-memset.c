#include "main.h"

/**
 *_memset - that fills memory with a constant byte
 *@s: parametre char
 *@b: parametre conctant
 *@n: parametre size
 *
 *Return: Return char
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
