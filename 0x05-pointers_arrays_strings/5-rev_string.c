#include "main.h"

/**
* rev_string -> reverses a string
* @s: the stringpassed to rev_string
*
*Return: always return 0
*/

void rev_string(char *s)
{
int n  = _strlen(*s);
int i;
int m = n - 1;
for (i = 0; i >= m; i++)
{
s[i] = s[m - i];
}
}
