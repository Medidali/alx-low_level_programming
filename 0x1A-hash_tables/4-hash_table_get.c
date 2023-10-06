#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value of key.
  * @ht: pointer to hash table.
  * @key: key.
  * Return: value of key, or NULL if key couldn’t be found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp_node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}
	return (NULL);
}
