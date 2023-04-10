#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: name of the file to read
 * @letters: maximum number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 if an error occurs
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nb_rd, nb_wrt;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nb_rd = read(fd, buf, letters);
	nb_wrt = write(STDOUT_FILENO, buf, nb_rd);

	close(fd);

	free(buf);

	return (nb_wrt);
}
