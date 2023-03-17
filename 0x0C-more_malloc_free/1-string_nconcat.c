#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int ls1, ls2, lsout, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	sout = malloc(lsout + 1);

	if (sout == NULL)
		return (NULL);

	for (m = 0; m < lsout; m++)
		if (m < ls1)
			sout[m] = s1[m];
		else
			sout[m] = s2[m - ls1];

	sout[m] = '\0';

	return (sout);
}
