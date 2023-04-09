#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m;
	int len, b_two;

	if (!b)
		return (0);

	m = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, b_two = 1; len >= 0; len--, b_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			m += b_two;
		}
	}

	return (m);
}
