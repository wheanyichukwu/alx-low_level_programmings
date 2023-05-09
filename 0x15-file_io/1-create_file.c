#include "main.h"

/**
 * create_file - Creates a file function.
 * @filename: A pointer to the name of the file to created.
 * @text_content: A pointer to a string content to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, w_file, c_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c_len = 0; text_content[c_len];)
			c_len++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w_file = write(file_d, text_content, c_len);

	if (file_d == -1 || w_file == -1)
		return (-1);

	close(file_d);

	return (1);
}
