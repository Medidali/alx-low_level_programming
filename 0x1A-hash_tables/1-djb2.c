#include "hash_tables.h"

/**
 * hash_djb2 - Implementation djb2 algorithm
 * @str: use string to generate hash value
 *
 * Return: value of hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int x;

	hsh = 5381;
	while ((x = *str++))
	{
		hsh = ((hsh << 5) + hsh) + x; /* hash * 33 + c */
	}
	return (hsh);
}
