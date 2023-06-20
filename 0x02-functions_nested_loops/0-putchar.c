#include "main.h"

/*
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
  char contener[] = "_putchar"; //main - Entry point
int i;

for (i = 0; contener[i] != '\0'; i++)
{
putchar(contener[i]);
}
putchar('\n');
return (0);
}
