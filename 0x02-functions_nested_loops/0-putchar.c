#iclude < stdio.h >

/*
 *fonction main
 *the main function allows us to display
 *the _putchar character
*/

int main(void)
{
char contener[] = "_putchar";
int i;

for (i = 0; contener[i] != '\0'; i++)
{
putchar(contener[i]);
}
putchar('\n');
return (0);
}
