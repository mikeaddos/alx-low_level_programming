#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the first node of the list
 *
 * Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *cr_node;
	listint_t *temp;

	if (head != NULL)
	{
		cr_node = *head;
		while ((temp = cr_node) != NULL)
		{
			cr_node = cr_node->next;
			free(temp);
		}
		*head = NULL;
	}
}
