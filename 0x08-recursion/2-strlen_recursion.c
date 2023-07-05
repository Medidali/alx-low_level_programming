#include "main.h"
/**
 *_strlen_recursion - fonction return the length of a string
 *@s: parametre string
 *
 *Return :return length of a string @s
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion(s + 1));
}
else
{
return (0);
}
}
