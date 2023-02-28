#include "main.h"
/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	for (c = c - 1 ; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
