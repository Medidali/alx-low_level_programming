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

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
