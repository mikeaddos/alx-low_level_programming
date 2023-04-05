#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: double pointer to the head of the list
 *
 * Return: no return
 */
void free_listp(listp_t **head)
{
	listp_t *crn;
	listp_t *temp;

	if (head != NULL)
	{
		crn = *head;
		while ((temp = crn) != NULL)
		{
			crn = crn->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listp_t *hptr, *nwnode, *add;
	size_t nbnodes = 0;

	hptr = NULL;
	while (head != NULL)
	{
		nwnode = malloc(sizeof(listp_t));

		if (nwnode == NULL)
			exit(98);

		nwnode->p = (void *)head;
		nwnode->next = hptr;
		hptr = nwnode;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nbnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nbnodes++;
	}

	free_listp(&hptr);
	return (nbnodes);
}
