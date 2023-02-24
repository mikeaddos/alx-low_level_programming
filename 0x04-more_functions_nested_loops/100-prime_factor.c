#include <stdio.h>
/**
 * main - prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long a, b;

	a = 612852475143;

	for (b = 2; b < a; b++)
	{
		while (a % b == 0)
			a = a / b;
	}

	printf("%lu\n", a);

	return (0);
}
