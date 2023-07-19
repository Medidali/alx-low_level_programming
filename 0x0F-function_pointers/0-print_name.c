#include "function_pointers.h"
/**
 *print_name - function that print name
 *@name: pointer to a string
 *@f: pointer to a function
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
char *name1 = f(name);

while (*name1 != '\0')
{
putchar(*name1);
name1++;
}
