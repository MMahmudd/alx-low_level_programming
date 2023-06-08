#include "hash_tables.h"

/**
 * hash_djb2 - Hash_function implementation of the djb2_algorithm.
 * @str: hash from strings.
 *
 * Return: ret calculation of hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
