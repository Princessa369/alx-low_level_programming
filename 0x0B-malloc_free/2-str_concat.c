#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates twi strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *cct;
	int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	cct = malloc(sizeof(char) * (a + b + 1));
	if (cct == NULL)
	return (NULL);

	a = b = 0;
	while (s1[a] != '\0')
	{
	cct[a] = s1[a];
	a++;
	}
	while (s2[b] != '\0')
	{
	cct[a] = s2[b];
	a++, b++;
	}
	cct[a] = '\0';
	return (cct);
	}
