#include "main.h"
/**
 *malloc_checked - function that allocates memory
 *@b: parametre passed a function
 *
 *Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(sizeof(void) * n);
if (p == NULL)
{
exit(98);
}
return (p);
}
