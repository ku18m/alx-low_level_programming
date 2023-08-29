#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: pointer to the first node.
 * @idx: the index of the new node.
 * @n: the n value of the new node.
 *
 * Return: the new node of a listint_t linked list OR (NULL) if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = *head;
	i = 0, idx--;
	while (tmp && (i < idx))
	{
		tmp = tmp->next;
		i++;
	}
	if (idx == i)
	{
		new = malloc(sizeof(listint_t *));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = tmp->next;
		tmp->next = new;
		return (new);
	}
	return (NULL);
}
