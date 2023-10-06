#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table.
 * @ht: pointer to hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempnode, *aux;
	unsigned int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tempnode = ht->array[i];
		while (tempnode)
		{
			aux = tempnode;
			free(aux->key);
			free(aux->value);
			free(aux);
			tempnode = tempnode->next;
		}
	}
	free(ht->array);
	free(ht);
}
