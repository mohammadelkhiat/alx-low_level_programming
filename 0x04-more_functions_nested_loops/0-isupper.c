#include "main.h"

/**
 * _isupper - is it upper?
 * @c: is the given input
 * Return: returns 1 if upper, else is 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
