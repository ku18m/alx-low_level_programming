#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: The hash table to update.
 * @key: The key of the node.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !ht->array || !key || !value || ht->size <= 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	else
		ht->array[index] = node;

	node->key = strdup(key), node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node);
		return (0);
	}

	return (1);
}
