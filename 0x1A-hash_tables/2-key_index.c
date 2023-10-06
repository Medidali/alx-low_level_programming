#include "hash_tables.h"

/**
 * key_index - index of a key.
 * @key: key.
 * @size: size of the hash table's array .
 * Return: index at which the key/value pair should be stored
 * in the array of the hash table.
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
