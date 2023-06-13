#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: textfile to be read
 * Return: actual number of letters it could read and print
 * 0 if the file cannot be open or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the xpected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *cat;
	ssize_t fp;
	ssize_t wr;
	ssize_t rd;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	cat = malloc(sizeof(char) * letters);
	rd = read(fp, cat, letters);
	wr = write(STDOUT_FILENO, cat, rd);

	free(cat);
	close(fp);
	return (wr);
}
