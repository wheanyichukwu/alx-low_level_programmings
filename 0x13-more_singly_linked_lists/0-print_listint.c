#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t elm = 0;

	while (h)
	{
		printf("%d\n", h->n);
		elm++;
		h = h->next;
	}

	return (elm);
}
