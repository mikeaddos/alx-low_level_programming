#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list
 *
 * @head: pointer to head of the list
 * @n: value of the element
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr;
	dlistint_t *h;

	curr = malloc(sizeof(dlistint_t));
	if (curr == NULL)
		return (NULL);

	curr->n = n;
	curr->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	curr->next = h;

	if (h != NULL)
		h->prev = curr;

	*head = curr;

	return (curr);
}
