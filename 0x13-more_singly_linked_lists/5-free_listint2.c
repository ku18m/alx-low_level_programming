#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to the first node.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *ptr;

    tmp = *head;
	while (tmp && *head != NULL)
	{
		ptr = tmp->next;
		free(tmp);
		tmp = ptr;
	}
	*head = NULL;
}
