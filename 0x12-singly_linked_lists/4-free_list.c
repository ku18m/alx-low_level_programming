#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: the first node pointer.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		free(head->str);
		free(head);
		head = temp->next;
	}
	free(head->str);
	free(head);
}
