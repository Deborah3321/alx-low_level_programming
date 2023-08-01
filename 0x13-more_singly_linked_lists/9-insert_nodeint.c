#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *with = *head;
	unsigned int benefit;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = with;
		*head = new;
		return (new);
	}

	for (benefit = 0; benefit < (idx - 1); benefit++)
	{
		if (with == NULL || with->next == NULL)
			return (NULL);

		with = with->next;
	}

	new->next = with->next;
	with->next = new;

	return (new);
}
