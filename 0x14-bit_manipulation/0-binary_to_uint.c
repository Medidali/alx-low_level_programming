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

if (b == NULL)
{
return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')

return (0);
}

for (i = 0; b[i] != '\0'; i++)
{
num <<= 1;

if (b[i] == '1')
num += 1;

}

return (num);
}
