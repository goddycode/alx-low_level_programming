#include "main.h"

/**
 * get_bit - func returns value of a bit at a given index
 * @n: decimal operand
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	bits = (n >> index);
	if (index > 32)
	return (-1);
	return (bits & 1);
}
