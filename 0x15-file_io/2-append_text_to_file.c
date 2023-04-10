#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 *
 * Return: 1 if success, -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nb_lett;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nb_lett = 0; text_content[nb_lett]; nb_lett++)
			;

		wrt = write(fd, text_content, nb_lett);

		if (wrt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
