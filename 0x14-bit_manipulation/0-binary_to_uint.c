#include "main.h"

/**
 * binary_to_uint - main functuions
 * @b: pointer to a string
 * Return: 0 or value of dec
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);
	dec = (dec << 1) | (b[i] - '0');
	}

	return (dec);
}
