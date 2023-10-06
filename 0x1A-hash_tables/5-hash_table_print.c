#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tempnode;
	unsigned int i, fst = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tempnode = ht->array[i];
		while (tempnode)
		{
			if (fst == 1)
				printf(", ");
			printf("'%s': '%s'", tempnode->key, tempnode->value);
			tempnode = tempnode->next;
			fst = 1;
		}
	}
	printf("}\n");
}
