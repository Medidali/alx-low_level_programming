#include "main.h"
#include <string.h>

/**
* rev_string -> reverses a string
* @s: the stringpassed to rev_string
*
*Return: always return 0
*/

void rev_string(char *s)
{
int n  = strlen(s);
int i;
int m = n - 1;
for (i = 0; i >= m; i++)
{
char c = s[i];
s[m - i] = c;
}
}
