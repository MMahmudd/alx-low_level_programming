#include "hash_tables.h"

/**
 * hash_table_create - a function of a hash table.
 * @size: A size of an array.
 *
 * Return: If wrongly retrun - NULL.
 *         else - use a pointer when created a new hash_table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int ii;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (ii = 0; ii < size; ii++)
		ht->array[ii] = NULL;

	return (ht);
}
