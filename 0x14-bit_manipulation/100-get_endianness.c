#include "main.h"
/**
 * get_endianness -  a function that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int m;
	char *a;

	m = 1;
	a = (char *) &m;

	return ((int)*a);
}
