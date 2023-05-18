#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non digit character
 * @s: string to be checked
 * Return: 0 if a non digit is found, 1 if otherwise
 */

int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
	if (s[k] < '0' || s[k] > '9')
	return (0);
	k++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: length of the string
 */

int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len, j, len1, len2, bet, dig1, dig2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (j = 0; j < len1 + len2; j++)
	res[j] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
	dig1 = s1[len1] - '0';
	bet = 0;
	for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
	{
	dig2 = s2[len2] - '0';
	bet += res[len1 + len2 + 1] + (dig1 * dig2);
	res[len1 + len2 + 1] = bet % 10;
	bet /= 10;
	}
	if (bet > 0)
	res[len1 + len2 + 1] += bet;
	}
	for (j = 0; j < len - 1; j++)
	{
	if (res[j])
	a = 1;
	if (a)
	_putchar(res[j] + '0');
	}
	if (!a)
	_putchar('\n');
	free(res);
	return (0);
}
