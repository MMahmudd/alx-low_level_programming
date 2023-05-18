#include "lists.h"

/**
 * add_dnodeint - function that add new node at the begininning of  dbly,
 * linked lists
 * @head: pointer to pointers the to head of the list.
 * @n: data to be added
 *
 * Return: the address of a new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	
	new_node = malloc(sizeof(dlistint_t));

	
	if (new_node == NULL)
		return (NULL);

	
	new_node->n = n;

	
	new_node->next = *head;

	
	new_node->prev = NULL;

	
	if ((*head) != NULL)
		(*head)->prev = new_node;

	
	(*head) = new_node;

	return (new_node);
}
