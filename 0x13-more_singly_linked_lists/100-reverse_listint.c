#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointer to the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prvn;
	listint_t *next;

	prvn = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prvn;
		prvn = *head;
		*head = next;
	}

	*head = prvn;
	return (*head);
}
