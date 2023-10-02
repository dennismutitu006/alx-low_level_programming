#include "main.h"
/**
 * append_text_to_file -this function will append text at the end of a file.
 * @filename:name of the file in which the text will be appended.
 * @text_content: the null terminted string to add at the eof.
 * do not create the file if it doest exists.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t w;
	int y;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	y = open(filename, O_WRONLY | O_APPEND);

	if (y == -1)
		return (-1); /*file doesnt exist or insufficient permisions*/

	w = write(y, text_content, strlen(text_content));

	if (w == -1)
	{
		close(y);
		return (-1);
	}
	close(y);
		return (1);
}
