#include <stdio.h>

/**
 * main - a program that prints the size of various computer types
 * Return: 0 (success)
 */
int main(void)
{
	char j;
	int k;
	long int l;
	long long int m;
	float n;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(k));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(n));
return (0);
}
