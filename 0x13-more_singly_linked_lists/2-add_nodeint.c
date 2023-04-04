#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to head of listint_t list
 * @n: integer to be stored in new node
 *
 * Return: address of the new element or NUll if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node;

	nw_node = malloc(sizeof(listint_t));

	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = *head;
	*head = nw_node;

	return (*head);
}
