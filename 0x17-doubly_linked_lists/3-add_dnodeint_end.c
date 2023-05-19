#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at
 * the end of a dlistint_t list
 *
 * @head: pointer to the head of the list
 * @n: value of the element
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *curr;

	curr = malloc(sizeof(dlistint_t));
	if (curr == NULL)
		return (NULL);

	curr->n = n;
	curr->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = curr;
	}
	else
	{
		*head = curr;
	}

	currr->prev = h;

	return (curr);
}
