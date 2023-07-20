#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator : string to be printed between numbers
 *@n:  number of integers passed to the function
 *
 *Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int val;
va_list num;
va_start(num, n);
if (separator == NULL)
separator = "";
for (i = 0; i < n; i++)
{
val = va_arg(num, const unsigned int);
printf("%d", val);
if (i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
