#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * the print_listint_safe - prints a linked list safely
 * @head: the pointer to head of list
 *
 * Return: numbers of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t count = 0;

    while (slow && fast && fast->next)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            count++;
            while (slow != fast->next)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                slow = slow->next;
                count++;
            }
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            count++;
            break;
        }
        count++;
    }

    while (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        count++;
    }

    if (count == 0)
    {
        fprintf(stderr, "Error: list is empty\n");
        exit(98);
    }

    return count;
}
