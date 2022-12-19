#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - length of string function
 *@s: Para1
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	int i;
	String_length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		String_length++;
	}
	return (String_length);
}
