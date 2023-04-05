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
	listint_t *crn;

	prn = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && prn != NULL; m++)
		{
			prn = prn->next;
		}
	}

	if (prn == NULL || (prn->next == NULL && index != 0))
	{
		return (-1);
	}

	crn = prn->next;

	if (index != 0)
	{
		prn->crn = crn->next;
		free(crn);
	}
	else
	{
		free(prn);
		*head = crn;
	}

	return (1);
}
