#include "main.h"


/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
char letr;
int i;
i = 0;
while (i < 10)
{
for (letr = 'a'; letr <= 'z'; letr++)
{
_putchar(letr);
}
_putchar('\n');
i++;
}
}
