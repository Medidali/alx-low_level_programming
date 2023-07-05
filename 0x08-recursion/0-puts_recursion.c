#include "main.h"

/**
 *_puts_recursion - function that prints a string, followed by a new line
 *@s: pointer to a caractere 
 *
 *Return:return alwys 0

 */

void _puts_recursion(char *s)
{
_putchar(*s);
*s + 1;
if (*s != '\0')
{
_puts_recursion(*s);
}
 return (0);
}
