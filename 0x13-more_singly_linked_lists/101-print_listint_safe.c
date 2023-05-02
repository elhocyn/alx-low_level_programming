#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the lists of type listint_t to print
 *
 * Return: the numbers of nodes in the list
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

return (98);
}
