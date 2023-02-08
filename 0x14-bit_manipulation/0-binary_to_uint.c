#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int my_dec_val = 0;

	if (b[j] = '\0';
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		my_dec_val = 2 * my_dec_val + (b[j] - '0');
	}
	return (my_dec_val);
}
