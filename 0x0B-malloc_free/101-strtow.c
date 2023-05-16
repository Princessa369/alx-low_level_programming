#include "main.h"
#include <stdlib.h>

/**
 * count_word - splits a string into words
 * @s: string to evaluate
 * Return: Number of (words)
 */

int count_word(char *s)
{
	int wod, c, d;

	wod = 0;
	d = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			wod = 0;
		else if (wod == 0)
		{
			wod = 1;
			d++;
		}
	}
	return (d);
}

/**
 * strtow - prints a string into words
 * @str: string to evaluate
 * Return: Pointer to an array of strings(words)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int j, k = 0, len = 0, m = 0, word, beg, end;

while (*(str + len))
len++;
word = count_word(str);
if (word == 0)
	return (NULL);

matrix = (char **) malloc(sizeof(char *) * (word + 1));
		if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
	if (str[j] == ' ' || str[j] == '\0')
	{
	if (m)
	{
	end = j;
	tmp = (char *) malloc(sizeof(char) * (m + 1));
if (tmp == NULL)
return (NULL);
while (beg < end)
*tmp++ = str[beg++];
*tmp = '\0';
matrix[k] = tmp - m;
k++;
m = 0;
	}
	}
	else if (m++ == 0)
		beg = j;
	}
matrix[k] = NULL;
return (matrix);
}
