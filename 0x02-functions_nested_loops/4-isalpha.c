#include "main.h"
/**
* _isalpha - a function that checks for alphabetic character
*@c: contains value to be compared
* Return: 1 if c a letter otherwise 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
