#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *crn, *prvn;
	size_t count = 0;

	crn = head;
	prvn = NULL;

	while (crn != NULL)
	{
		printf("[%p] %d\n", (void *)crn, crn->n);
		count++;

		if (prvn > crn)
		{
			printf("-> [%p] %d\n", (void *)prvn, prvn->n);
			break;
		}
		prvn = crn;
		crn = crn->next;
	}

	if (count == 0 || crn == NULL)
	{
		return (count);
	}

	exit(98);
}
