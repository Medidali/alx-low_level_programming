#include "main.h"
/**
  * print_alphabet - Make the alphabet
  *
  * Return: void
  */

void print_alphabet(void)
{
char letr;
for (letr = 'a'; letr <= 'z'; letr++)
{
_putchar(letr);
}
_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
print_alphabet();
return (0);
}
