#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 *
 * @key: The key to get the index of it.
 * @size: Size of the hash table array.
 *
 * Return: Created hash table OR NULL if something went wrong.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
