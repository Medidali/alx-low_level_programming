#include "variadic_functions.h"
/**
 *sum_them_all - function that  returns the sum of all its parameters.
 *@n: an unsigned int
 *
 *Return: return sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
if (n != 0)
{
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
sum += va_arg(args, unsigned int);
}
va_end(args);
return sum;
}
return (0);
}
