#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area copied to
 * @src: memory area copied from
 * @n: number of bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
