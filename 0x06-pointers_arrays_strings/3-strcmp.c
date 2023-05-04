#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Difference between string 1 and 2
 */

int _strcmp(char *s1, char *s2)
{
	int f;

	f = 0;
	while (s1[f] != '\0' && s2[f] != '\0')
	{
	if (s1[f] != s2[f])
	{
		return (s1[f] - s2[f]);
	}
	f++;
	}
	return (0);
}
