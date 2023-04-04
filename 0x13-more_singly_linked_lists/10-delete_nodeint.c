#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index of a linked list
 * @head: double pointer to the head of the linked list
 * @index: index of the list where the node is deleted
 *
 * Return: 1 if success, -1 if  failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *pr_node;
	listint_t *cr_node;

	pr_node = *head;

	if (index != 0)
	{
		for (m = 0; m < index - 1 && prev != NULL; m++)
		{
			pr_node = pr_node->cr_node;
		}
	}

	if (pr_node == NULL || (prev->cr_node == NULL && index != 0))
	{
		return (-1);
	}

	cr_node = pr_node->cr_node;

	if (index != 0)
	{
		pr_node->cr_node = cr_node->cr_node;
		free(cr_node);
	}
	else
	{
		free(pr_node);
		*head = cr_node;
	}

	return (1);
}
