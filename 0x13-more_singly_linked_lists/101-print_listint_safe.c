#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current;
    size_t count = 0;
    uintptr_t printed_addresses[1024];
    uintptr_t current_address;
    size_t i;

    while (head != NULL)
    {
        current = head;
        head = head->next;

        current_address = (uintptr_t) current;

        for (i = 0; i < count; i++)
        {
            if (current_address == printed_addresses[i])
            {
                printf("-> [%p] %d\n", (void *) current, current->n);
                return (count);
            }
        }

        printed_addresses[count++] = current_address;
        printf("[%p] %d\n", (void *) current, current->n);
    }

    return (count);
}
