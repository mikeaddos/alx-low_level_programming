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
	listint_t *prnode;
	listint_t *crnode;

	prnode = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && prnode != NULL; m++)
		{
			prnode = prnode->crnode;
		}
	}

	if (prnode == NULL || (prnode->crnode == NULL && index != 0))
	{
		return (-1);
	}

	crnode = prnode->crnode;

	if (index != 0)
	{
		prnode->crnode = crnode->crnode;
		free(crnode);
	}
	else
	{
		free(prnode);
		*head = crnode;
	}

	return (1);
}
