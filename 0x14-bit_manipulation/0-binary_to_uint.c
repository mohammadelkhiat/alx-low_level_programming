#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * 	represented as a string to an unsigned integer
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * 	there is one or more chars in the string b that is not 0 or 1
 * 	b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int RTRN = 0;

	if (b == NULL)
		return (0);
	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			RTRN = RTRN * 2;
		}
		else if (b[i] = '1')
		{
			RTRN = RTRN * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (RTRN);
}
