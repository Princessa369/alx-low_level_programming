#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char lwc;

	for (lwc = 'a'; lwc <= 'z'; lwc++)
	{
		putchar(lwc);
	}
	putchar('\n');
	return (0);
}
