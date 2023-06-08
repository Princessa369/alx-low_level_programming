#include "main.h"

/**
* get_endianness - checks endianness
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsihned int m = 1;
	char *c = (char *) &m;

	return (*c);
}
