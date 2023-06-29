#include "main.h"
/**
 * _strcat - fuction wich concatainate two string
 * @dest: parametre 1 passed to funct
 * @src:parametre 2 passed to funct
 *@n: parametre 3 passed to funct
 *
 * Return:char
 */






char *_strcat(char *dest, char *src, int n)
{

{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}

