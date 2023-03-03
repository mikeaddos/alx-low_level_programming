#include "main.h"

/**
 * _strcmp - Compare string values
 * @b1: Input value
 * @b2: Input value
 * Return: b1[i] - b2[i]
 */
int _strcmp(char *b1, char *b2)
{
	int i;

	i = 0;
	while (b1[i] != '\0' && b2[i] != '\0')
	{
		if (b1[i] != b2[i])
		{
			return (b1[i] - b2[i]);
		}
		i++;
	}
	return (0);
}
