#include "lists.h"

/**
 * dlistint_len - function that returns a number of an element in a,
 * linked dlistint_t list.
 * @h: poiner to the heads of the lists.
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}