#include "main.h"
#include <string.h>
/**
 *print_rev - function that prints a string, in reverse.
 *
 * @s: The parametre passed to function.
 *
 * Return:no return.
 */
void print_rev(char *s)
{
int l = _strlen(s);
char str[l];
 strcpy(str, s);
int i = l - 1;
while (i >= 0)
{
_putchar(str[i]);
i--;
}
}
