#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of the file to create
 * @text_content: text to write to the file
 *
 * Return: 1 if it success, or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nb_lett;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nb_lett = 0; text_content[nb_lett]; nb_lett++)
		;

	wrt = write(fd, text_content, nb_lett);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
