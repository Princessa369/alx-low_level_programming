#include "main.h"

/**
 * _strncat - concatenates two strings with n number of bytes
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of bytes to be copied
 * Return: pointer to the resulting string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

c = 0;
while (dest[c] != '\0')
{
	c++;
}
d = 0;
while (d < n && src[d] != '\0')
{
	dest[c] = src[d];
	c++;
	d++;
}
dest[c] = '\0';
return (dest);
}
