#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *@a: para1
 *@b: para2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
        int* n = *a;
	*a = *b;
	*b = *n;
}
