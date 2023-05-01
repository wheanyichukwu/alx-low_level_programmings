#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *free_node;
	int del_node;

	if (!head || !*head)
		return (0);

	del_node = (*head)->n;
	free_node = (*head)->next;
	free(*head);
	*head = free_node;

	return (del_node);
}
