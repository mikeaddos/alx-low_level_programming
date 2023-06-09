#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash
 * table with a given size
 *
 * @size: size of hash table
 * Return: created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int m;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		array[m] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
