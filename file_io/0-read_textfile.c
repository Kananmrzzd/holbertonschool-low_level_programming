#include <stdlib.h>
#include "holberton.h"

/**
 * read_textfile -  reads a text file and prints it 
 *                   to the POSIX standard output
 * @ filename: name of file
 * @ @letters: number of letters
 *
 * Return: the actual number of 
 *          letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_len;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	file_len = read(fd, buf, letters);
	if (file_len == -1)
		return (0);

	if (write(STDOUT_FILENO, buf, file_len) != file_len)
		return (0);

	close(fd);
	free(buf);

	return (file_len);
}
