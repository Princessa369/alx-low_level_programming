#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destunation
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int lnt = 0;

	while (*(src + lnt) != '\0')
	{
	*(dest + lnt) = *(src + lnt);
	lnt++;
	}
	*(dest + lnt) = '\0';
	return (dest);
}
