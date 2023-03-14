#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int c, m, n, ia;

	if (ac == 0)
		return (NULL);

	for (c = m = 0; m < ac; m++)
	{
		if (av[m] == NULL)
			return (NULL);

		for (n = 0; av[m][n] != '\0'; n++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (m = n = ia = 0; ia < c; n++, ia++)
	{
		if (av[m][n] == '\0')
		{
			aout[ia] = '\n';
			m++;
			ia++;
			n = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[m][n];
	}
	aout[ia] = '\0';

	return (aout);
}
