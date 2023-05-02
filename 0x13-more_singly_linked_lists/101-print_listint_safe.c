#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a singly linked list of integers
 * @head: pointer to head node of the list
 *
 * Return: the numbers of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t (num) = 0;
    const listint_t *current, *prev;

    if (head == NULL)
        exit(98);

    current = head;
    prev = NULL;
    while (current != NULL)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;
        if (current < prev)
            break;
        prev = current;
        current = current->next;
    }

    return (num);
}
