#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *local, *sex = *head;
	unsigned int partner;

	if (sex == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(sex);
		return (1);
	}

	while (partner)
	{
		if (!sex || !(sex->next))
			return (-1);

		sex = sex->next;
		partner++;
	}

	local = sex->next;
	sex->next = local->next;
	free(local);
	return (1);
}
