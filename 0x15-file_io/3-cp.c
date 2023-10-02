#include "main.h"
/**
*main - entry point(main).
*@argc: argument count
*@argv: argunment vectors
*Return: 0 Always.
*/
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_f, fd_to;
	ssize_t br, bw;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_f = open(file_from, O_RDONLY);
    	if (fd_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from  %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_f);
		dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", file_to);
		return (99);
	}

	while ((br = read(fd_f, buffer, BUFFER_SIZE)) > 0)
	{
		bw = write(fd_to, buffer, br);
		if (bw == -1) {
		close(fd_f);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	}
	if (br == -1)
	{
		close(fd_f);
		close(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from  %s\n", file_from);
		return (98);
	}

	if (close(fd_f) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		return (100);
	}
	return (0);
}
