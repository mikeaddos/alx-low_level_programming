#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 14, 10 times,
 * followed by a new line.
 *
 * Return: always 0
 */
void print_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j + '0');

			if (j != 14)
			{
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
