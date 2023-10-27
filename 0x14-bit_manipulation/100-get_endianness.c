#include "main.h"

/**
 * get_endianness - main
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int output = 1;
	unsigned char *ptr = (unsigned char *)&output;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
