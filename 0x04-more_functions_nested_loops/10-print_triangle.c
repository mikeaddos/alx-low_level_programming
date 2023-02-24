#include "main.h"
/**
 * print_triangle - prints triangle followed by a new line
 * @size: print size
 * Return: Always 0.
 */

void print_triangle(int size)

{


	int i;
	int j;
	int d;
	int p;

	if (size > 0)
	{
		d = size - 1;
		for (i = 0; i < size ; i++)
		{
			for (j = d; j > 0 ; j--)
			{
				_putchar (' ');
			}

			for (p = 0; p <= i; p++)
			{
				_putchar (35);
			}

			d--;

			_putchar ('\n');


		}

	}

	else
	{
		_putchar ('\n');
	}
}
