#include "main.h"
/**
 *factorial - calcule and return the factorial of number @n
 *@n:the parametre of function
 *
 *Return: return factorial of @n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}

