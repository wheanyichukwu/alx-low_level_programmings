#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file to be appends.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or if user do not
 *         have writing permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_f, w_file, c_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (c_len = 0; text_content[c_len];)
			c_len++;
	}

	open_f = open(filename, O_WRONLY | O_APPEND);
	w_file = write(open_f, text_content, c_len);

	if (open_f == -1 || w_file == -1)
		return (-1);

	close(open_f);

	return (1);
}
