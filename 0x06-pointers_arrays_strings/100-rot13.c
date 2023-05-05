#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: input
 * Return: pointer to destination
 */

char *rot13(char *n)
{
	int u, v;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (u = 0; n[u] != '\0'; u++)
	{
	for (v = 0; a[v] != '\0'; v++)
	{
	if (n[u] == a[v])
	{
		n[u] = b[v];
		break;
	}
	}
	}
	return (n);
}
