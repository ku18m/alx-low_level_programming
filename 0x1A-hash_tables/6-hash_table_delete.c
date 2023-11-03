#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: The hash table to delete.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *tmp_next;
	unsigned long int i;
	short int flag;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			while (tmp != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
				tmp = tmp->next;
			}
		}
		i++;
	}
}
