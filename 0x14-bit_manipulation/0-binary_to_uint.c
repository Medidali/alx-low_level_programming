#include "main.h"

/**
 *binary_to_uint - function that convert binary to ui
 *@b : pointer to the string
 *Return : return a value of type ui
 */

unsigned int binary_to_uint(const char *b)
{

int i;
unsigned int num = 0;
int len = strlen(b);
char c;

if (b == NULL)
{
return (0);
}

for (i = 0; i < len; i++)
{

c = b[i];
if (c != '0' && c != '1')
{
return (0);
}
else
{
num = (num << 1) + (c - '0');
}
}

return (num);
}
