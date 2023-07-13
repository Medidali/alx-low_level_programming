#include "main.h"
/**
 *malloc_checked - function that allocates memory
 *@b: parametre passed a function
 *
 *Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
