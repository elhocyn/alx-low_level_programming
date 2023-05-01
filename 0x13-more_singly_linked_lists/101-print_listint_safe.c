#include "lists.h"

/**
 * the print_listint_safe - a function that print a listint_t linked the list.
 * @head: list of type listint_t to the print
 *
 * Return:the number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t num = 0;
    long int diff;

    while (head)
    {
        diff = head - head->next;
        num++;
        printf("[%p] %d\n", (void *)head, head->n);
        if (diff > 0)
            head = head->next;
        else
        {
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            break;
        }
    }

    return (num);
}
