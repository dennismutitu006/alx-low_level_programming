#include "main.h"
/**
 * read_textfile - this function  reads a text file and  prints it to
 * the POSIX standard output.
 * @letters:the number of letters it should read and print.
 * @filename:name of the file to be read.
 * Return: 0 (if the files cannot be opened or read,or if the filename is NULL
 * if write fails or doesnt write the expected amount od bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w;
	char *bf;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	bf = malloc(letters);

	if (bf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, bf, letters);
	if (r == -1)
	{
		close(fd);
		free(bf);
		return (0);
	}

	w = write(STDOUT_FILENO, bf, r);
	if (w == -1 || w != r)
	{
		close(fd);
		free(bf);
		return (0);
	}
	close(fd);
	free(bf);
	return (w);
}
