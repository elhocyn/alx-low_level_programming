#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 * a given position
 * in a doubly linked list.
 * @h: Pointer to the  pointer to the head of a list.
 * @idx: Index of the position to insert the node.
 * @n: Data for the new node.
 * Return: Address of the new node, or NULL if it failed.
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node;
	unsigned int current_index = 0;


	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;


	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}


	while (current_node && current_index != idx - 1)
	{
		current_node = current_node->next;
		current_index++;
	}

	if (current_index == idx - 1 && current_node)
	{
		new_node->prev = current_node;
		new_node->next = current_node->next;
		if (current_node->next)
			current_node->next->prev = new_node;
		current_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
