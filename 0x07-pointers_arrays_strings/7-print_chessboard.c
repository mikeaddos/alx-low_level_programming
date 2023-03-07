#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int p;

	for (m = 0; m < 8; m++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[m][p]);
		_putchar('\n');
	}
}
