#include "lists.h"

/**
 * sum_listint - Sums up all the integers in a linked list
 * @head: a pointer to the head node of the linked list
 *
 * Return: sum of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
