#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given
 * index in a dlistint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to delete.
 * Return: 1 deletion is successful, -1 if it fails.
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int current_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node && current_index != index)
	{
		current_node = current_node->next;
		current_index++;
	}
	if (current_node)
	{
		if (current_node->prev)
			current_node->prev->next = current_node->next;
		if (current_node->next)
			current_node->next->prev = current_node->prev;
		free(current_node);
		return (1);
	}
	return (-1);
}
