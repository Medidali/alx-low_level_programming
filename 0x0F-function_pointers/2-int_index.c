#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *@array: pointer to an array
 *@size: elements number
 *@cmp: pointer point to a function
 *
 *Return: return an int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int reslt = cmp(array[i]);
if (size <= 0)
{
return (0);
}
while (reslt == 0)
{
i++;
if (i == size)
{
exit(-1);
}
else
{
reslt = cmp(array[i]);
}
}
return (i);
}
