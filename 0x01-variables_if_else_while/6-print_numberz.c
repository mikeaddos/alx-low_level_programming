#include <stdio.h>
/**
 * main - program that prints all single digit numbers of
 * base 10 starting from 0 followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	char c = '0';

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}
	putchar('\n');
	return (0);
}
