#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index of a linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if success, -1 if  failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *prvn;
	listint_t *next;

	prvn = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && prvn != NULL; m++)
		{
			prvn = prvn->next;
		}
	}

	if (prvn == NULL || (prvn->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prvn->next;

	if (index != 0)
	{
		prvn->next = next->next;
		free(next);
	}
	else
	{
		free(prvn);
		*head = next;
	}

	return (1);
}
