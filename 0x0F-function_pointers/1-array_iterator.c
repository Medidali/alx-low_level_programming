#include "function_pointers.h"
/**
 *array_iterator - function that executes a function.
 *@array: pointer to an array
 *@size: size of array
 *@action: pointer to a function
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array && action)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
