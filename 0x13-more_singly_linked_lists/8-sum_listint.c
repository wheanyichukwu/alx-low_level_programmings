#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	int node_sum = 0;
	listint_t *f_node = head;

	while (f_node)
	{
		node_sum += f_node->n;
		f_node = f_node->next;
	}

	return (node_sum);
}
