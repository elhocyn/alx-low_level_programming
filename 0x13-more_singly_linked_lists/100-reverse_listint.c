#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head:the pointer to the head of the pointer of linked list
 * Return: pointer to first node of reversed the list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head) = prev;

	return (*head);
}
