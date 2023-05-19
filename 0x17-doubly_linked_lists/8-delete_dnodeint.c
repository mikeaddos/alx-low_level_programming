#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index of a dlistint_t linked list
 *
 * @head: double poitner to the head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cr;
	dlistint_t *pr;
	unsigned int m;

	cr = *head;

	if (cr != NULL)
		while (cr->prev != NULL)
			cr = cr->prev;

	m = 0;

	while (cr != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = cr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				pr->next = cr->next;

				if (cr->next != NULL)
					cr->next->prev = pr;
			}

			free(cr);
			return (1);
		}
		pr = cr;
		cr = cr->next;
		m++;
	}

	return (-1);
}
