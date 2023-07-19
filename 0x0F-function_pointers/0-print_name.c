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
if (name != NULL && f != NULL)
f(name);
}
