#include "main.h"
/**
 * print_alphabet_x10 -  funct prints 10 times the alphabet
 * Return: Always return 0
 */
void print_alphabet_x10(void)
{
	int i, j = 0;

	while (i <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	i++;
	_putchar('\n');
	}
}

