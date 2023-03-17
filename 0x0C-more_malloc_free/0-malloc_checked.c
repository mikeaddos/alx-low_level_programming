#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: number of memory
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
