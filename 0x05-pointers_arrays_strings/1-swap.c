#include "main.h"

/**
 *swap_int - this function swaps the value of two integers
 *@a: parameter of function
 *@b: parameter of function
 *
 *Return: Always 0
 */


void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
