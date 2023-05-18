#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a doubly linked list
 * @h: poiner to a head of a list
 *
 * Return: numbr of a node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t countt = 0;

	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		countt++;
		h = h->next;
	}
	return (countt);
}
