#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index,
 * of a dlistint_t linked list.
 *
 * @head: pointer to a node.
 * @index: the index of the node, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	while (temp->prev)
		temp = temp->prev;

	i = 0;
	while (temp && i <= index)
	{
		if (i == index)
		{
			if (temp->prev == NULL && temp->next == NULL)
				*head = NULL;
			else if (temp->prev == NULL)
				*head = temp->next, temp->next->prev = NULL;
			else if (temp->next == NULL)
				*head = temp->prev, temp->prev->next = NULL;
			else
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				*head = temp->next;
			}			
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}

	return (-1);
}
