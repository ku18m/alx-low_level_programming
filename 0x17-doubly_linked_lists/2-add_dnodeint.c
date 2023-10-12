#include "lists.h"

/**
 * add_dnodeint - returns the number of elements in a linked dlistint_t list.
 *
 * @head: pointer to a node.
 * @n: The value to add.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr_node, *new_node;

	new_node = malloc(sizeof(dlistint_t *));
	if (new_node == NULL)
		return (NULL);

	if (*head != NULL)
	{
		curr_node = *head;
		while (curr_node->prev)
			curr_node = curr_node->prev;
		curr_node->prev = new_node;
	}
	else
		*head = new_node;

	new_node->next = curr_node;
	new_node->n = n;
	new_node->prev = NULL;
	return (new_node);
}
