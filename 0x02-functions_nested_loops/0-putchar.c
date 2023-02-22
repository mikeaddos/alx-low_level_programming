#include "main.h"
#include <unistd.h>
/**
 * main - a program that prints _putchar
 * Return: 0 (success)
 */
int main(void)
{
	char put[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(put[a]);
	}
		_putchar('\n');
	return (0);
}
