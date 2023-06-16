#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a
 * doubly linked list.
 * @head: Pointer to the pointer to the first element of the list.
 * @n: Integer value to set in the new node.
 * Return: Address of the new element, or NULL if it failed.
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (current)
	{
		while (current->next)
			current = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	return (new_node);
}
