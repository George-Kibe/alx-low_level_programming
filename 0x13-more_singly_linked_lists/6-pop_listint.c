#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns its data
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: The data of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    listint_t *current_node;
    int data;

    if (*head == NULL)
        return 0;

    current_node = *head;
    data = current_node->n;
    *head = current_node->next;
    free(current_node);

    return data;
}

