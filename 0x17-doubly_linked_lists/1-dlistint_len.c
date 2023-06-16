#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t node_count = 0;

	while (current_node)
	{
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
