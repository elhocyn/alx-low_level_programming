#include "lists.h"

/**
 * delete_nodeint_at_index - a function that delete node
 * at index index of a listint_t link list.
 * @head: pointer to the head the pointer of linked list
 * @index: index to deletes node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}
