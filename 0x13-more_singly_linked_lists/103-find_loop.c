#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to the head pointer of linked the list
 * Return: address of nodes where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{

			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (turtle);
		}
	}

	return (NULL);
}
