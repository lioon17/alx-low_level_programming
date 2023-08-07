#include "main.h"
/**
 * append_text_to_file - Appends specified text to the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: String to be added to the end of the file.
 *
 * Return: Returns -1 if the function fails or if filename is NULL.
 *         Returns -1 iffile does not exist/if user lacks write permissions.
 *         Returns 1 on successful appending of text to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
