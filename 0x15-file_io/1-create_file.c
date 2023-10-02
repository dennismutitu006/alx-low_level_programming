#include "main.h"
/**
 * create_file - this is a function that creates a file.
 * @filename: the name of the file to be created.
 * @text_content: a null terminated string to write to the file.
 * Return: 1 on success, -1 on failure.(file cant be created, file cant be
 * written, write "fails",)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t w;
	int d;

	if (filename == NULL)
		return (-1);
	d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (d == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(d, text_content, strlen(text_content));

		if (w == -1)
		{
			close(d);
			return (-1);
		}
	}

	close(d);
	return (1);
}
