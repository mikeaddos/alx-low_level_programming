#include <stdio.h>
#include <stdlib.h>

/**
 * main - check for code
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int m, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (m = 0; m < nbytes; m++)
	{
		printf("%02x", opc[m] & 0xFF);
		if (m != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
