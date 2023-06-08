#include <stdlib.h>
#include <string.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
* Return: the converted number, or 0 if
* there's one or more chars in the string b that is not 0 or 1
* b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int t;
	unsigned int conv = 0;

	if (!b)
		return (0);

	for (t = 0; b[t]; t++)
	{
		if (b[t] < '0' || b[t] > '1')
			return (0);
		conv = 2 * conv + (b[t] - '0');
	}

	return (conv);
}
