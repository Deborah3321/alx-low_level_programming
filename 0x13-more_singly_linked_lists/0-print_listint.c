#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;
	const listint_t *phogole = h;

	while (phogole != NULL)
	{
		s += 1;
		printf("%d\n", phogole->n);
		phogole = phogole->next;
	}

	return (s);
}
