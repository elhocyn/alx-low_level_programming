#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) in
 * a doubly linked the list.
 * @head: Pointer to the head of the list.
 * Return: Sum of all data in the list, 0 if the list is empty.
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
