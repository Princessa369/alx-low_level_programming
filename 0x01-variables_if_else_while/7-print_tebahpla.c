#include <stdio.h>

/**
 * main - prints lower case alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char lwr;

	for (lwr = 'z'; lwr >= 'a'; lwr--)
		putchar(lwr);

	putchar('\n');

	return (0);
}
