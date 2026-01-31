#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list
 *
 * @head: A pointer to a pointer to the first element of a list
 * @index: The index of the node that should be deleted (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	unsigned int p;

	if (*head == NULL)
		return (-1);

	saved_head = *head;

	if (index == 0)
	{
		*head = saved_head->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(saved_head);
		return (1);
	}

	for (p = 0; p < index; p++)
	{
		if (saved_head->next == NULL)
			return (-1);
		saved_head = saved_head->next;
	}

	if (saved_head->next == NULL)
	{
		saved_head->prev->next = NULL;
		free(saved_head);
		return (1);
	}

	saved_head->prev->next = saved_head->next;
	saved_head->next->prev = saved_head->prev;
	free(saved_head);
	return (1);
}
