#include "lists.h"

/**
 * _add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *
 * @head: pointer to a node.
 * @n: The value to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *_add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	new_node->next = (*head)->prev->next;
	new_node->prev = (*head)->prev;
	new_node->n = n;
	(*head)->prev->next = new_node;
	(*head)->prev = new_node;

	return (new_node);
}

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

	if (head == NULL && idx != 0)
		return (new_node);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (head->prev)
		head = head->prev;

	i = 0;
	while (head && i <= idx)
	{
		if (i == idx)
		{
			new_node = _add_dnodeint(&head->prev->next, n);
			return (new_node);
		}
		head = head->next, i++;
	}

	if (i == idx)
		new_node = add_dnodeint_end(h, n);

	return (new_node);
}
