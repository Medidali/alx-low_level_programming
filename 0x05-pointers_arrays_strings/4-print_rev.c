#include "main.h"

/**
 *print_rev - function that prints a string, in reverse.
 *
 * @s: The parametre passed to function.
 *
 * Return:no return.
 */
void print_rev(char *s)
{
int len = _strlen(s);
char string[] = s;
int i = len - 1;
while (i => 0)
{
_putchar(string[i]);
i--;
}
