#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number
* @index: index of the bit you want to get, starting from 0
* Return: value of the bit at index index, or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index) & 1;

	return (val_bit);
}
