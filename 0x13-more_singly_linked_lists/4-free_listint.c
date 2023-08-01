#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: listint_t to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}
}
