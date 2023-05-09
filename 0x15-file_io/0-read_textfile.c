#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The allocated text file being read in main
 * @letters: actual number of letters it could read
 * Return: w_file actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr_buffer;
	ssize_t fd;
	ssize_t r_file;
	ssize_t w_file;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr_buffer = malloc(sizeof(char) * letters);
	r_file = read(fd, ptr_buffer, letters);
	w_file = write(STDOUT_FILENO, buf, r_file);

	free(ptr_buffer);
	close(fd);
	return (w_file);
}
