#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the head node of the list
 *
 * Return: value of the head node deleted or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *temp;

	if (*head == NULL)
		return (0);


	temp = *head;
	h_node = temp->n;
	*head = (*head)->next;
	free(temp);

	return (h_node);
}
