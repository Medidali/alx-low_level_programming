#include "main.h"
/**
 * largestPrimeFactor - prints the largest prime factor of @number
 *@number:.input integer parameter
 * Return: always largestFactor
 */
long long largestPrimeFactor(long long number)
{
longlong largestFactor = 2;

if (number % 2 == 0)
{
number /= 2;
}
long long factor = 3;

for (long long factor = 3; factor * factor <= number; factor += 2)
{
while (number % factor == 0)
{
largestFactor = factor;
number /= factor;
}
}

return (largestFactor);
}

/**
 * main - prints the largest prime factor of 612852475143
 * Bwave ICT / Bright Daniel
 * Return: always 0
 **/
int main(void)
{
long long number = 612852475143;
long long result = largestPrimeFactor(number);
printf("The largest prime factor of %lld is: %lld\n", number, result);

return (0);
}
