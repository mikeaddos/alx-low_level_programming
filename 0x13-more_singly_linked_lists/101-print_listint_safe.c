#include "lists.h"

/**
 * free_listp - frees a listint_t list
 * @head: double pointer to the first node of the list
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *crn;

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
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ncount = 0;
	listp_t *nw_node, *add, *hptr;

	hptr = NULL;
	while (head != NULL)
	{
		nw_node = malloc(sizeof(listp_t));

		if (nw_node == NULL)
			exit(98);

		nw_node->p = (void *)head;
		nw_node->next = hptr;
		hptr = nw_node;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (ncount);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		ncount++;
	}

	free_listp(&hptr);
	return (ncount);
}
