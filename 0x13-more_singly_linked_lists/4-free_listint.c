#include "lists.h"

/**
 * free_listint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
