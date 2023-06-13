#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, lnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lnt = 0; text_content[lnt];)
			lnt++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, lnt);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
