#include "hash_tables.h"

/**
 * key_index - Get_index at which a key and value
 *      pair must store in array of a hash_table.
 * @key: A key to get_index.
 * @size: A size of an array of hash_table.
 *
 * Return: An index of a key.
 * Description: Using the djb2_algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
