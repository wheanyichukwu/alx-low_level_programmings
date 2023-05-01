#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t lists.
 * @h: linked list of type listint_t length
 *
 * Return: number of nodes else return error
 */

size_t listint_len(const listint_t *h)
{
	size_t elm = 0;

	while (h)
	{
		elm++;
		h = h->next;
	}

	return (elm);
}
