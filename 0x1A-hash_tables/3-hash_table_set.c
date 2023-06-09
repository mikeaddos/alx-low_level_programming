#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an
 * element to the hash table
 * @ht: hash table
 * @key: key of the new element
 * @value: value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_hnode = NULL;
	hash_node_t *temp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}


	new_hnode = malloc(sizeof(*new_hnode));
	if (!new_hnode)
		return (0);

	new_hnode->key = strdup(key);
	new_hnode->value = strdup(value);

	new_hnode->next = ht->array[index];
	ht->array[index] = new_hnode;

	return (1);
}
