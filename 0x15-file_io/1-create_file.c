#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, wr, lnt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lnt = 0; text_content[lnt];)
			lnt++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fp, text_content, lnt);

	if (fp == -1 || wr == -1)
		return (-1);

	close(fp);

	return (1);
}
