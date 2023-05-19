#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: pointer to the head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr);
	}
}
