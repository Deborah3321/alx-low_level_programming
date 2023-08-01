#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in the te listint_t list
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *friend = head;

	while (friend)
	{
		total += friend->n;
		friend = friend->next;
	}
	return (total);
}
