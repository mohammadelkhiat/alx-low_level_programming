#include "main.h"

/**
 * binary_to_uint - binary number to an unsigned int
 * @b: Pointer
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		  result = (result << 1) | (b[i] - '0');
	}
	return (result);
}
