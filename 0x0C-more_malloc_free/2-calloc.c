#include "main.h"

/**
 *_calloc -  function that allocates memory for an array,
 *@nmemb: elements number
 *@size : size of each element
 *
 *Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *a;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
a = malloc(nmemb * size);
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
*(a + i) = 0;
}
return (a);
}
