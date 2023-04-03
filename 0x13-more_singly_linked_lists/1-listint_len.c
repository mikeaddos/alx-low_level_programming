#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: a pointer to the head of the linked list
 *
 * Return: number of elements in the linked lists
 */
size_t listint_len(const listint_t *h)
{
	size_t nlen = 0;

	while (h != NULL)
	{
		h = h->next;
		nlen++;
	}
	return (nlen);
}
