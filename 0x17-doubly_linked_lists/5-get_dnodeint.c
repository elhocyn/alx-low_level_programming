#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a
 * doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve.
 * Return: a Pointer to the nth node, or NULL if the node doesn't
 * exist.
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int count = 0;

	while (current_node && count != index)
	{
		count++;
		current_node = current_node->next;
	}

	if (current_node && count == index)
		return (current_node);

	return (NULL);
}
