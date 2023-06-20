#include "main.h"

/*
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
  /*this functuin for display*/
char contener[] = "_putchar";
int i;
for (i = 0; contener[i] != '\0'; i++)
{
putchar(contener[i]);
}
putchar('\n');
return (0);
}
