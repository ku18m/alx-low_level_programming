#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 *
 * @h: pointer to a node.
 * @idx: the index of the node, starting from 0.
 * @n: the value to assign.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node = NULL, *head = *h;

	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	i = 0;
	while (head && i <= idx)
	{
		if (i == idx)
		{
			new_node = add_dnodeint(&head->prev->next, n);
			break;
		}
		head = head->next, i++;
	}

	if (i == idx && new_node == NULL)
		new_node = add_dnodeint_end(h, n);

	return (new_node);
}
