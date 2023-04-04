#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double ointer to the head of the linked list
 * @n: value to store in the new node
 *
 * Return: address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node;
	listint_t *temp;

	(void)temp;

	nw_node = malloc(sizeof(listint_t));

	if (nw_node == NULL)
		return (NULL);

	nw_node->n = n;
	nw_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = nw_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nw_node;
	}

	return (*head);
}
