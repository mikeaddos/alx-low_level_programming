#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: double pointer of the head of the list
 * @idx: index of the list where the new node is added
 * @n: Value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *nw_node;
	listint_t *d;

	d = *head;

	if (idx != 0)
	{
		for (m = 0; m < idx - 1 && d != NULL; m++)
		{
			d = d->next;
		}
	}

	if (d == NULL && idx != 0)
		return (NULL);

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;

	if (idx == 0)
	{
		nw_node->next = *head;
		*head = nw_node;
	}
	else
	{
		nw_node->next = d->next;
		d->next = nw_node;
	}

	return (nw_node);
}
