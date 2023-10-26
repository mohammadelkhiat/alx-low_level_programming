#include "main.h"
/**
 * clear_bit - main funcation
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: unsigned long int
 * Return: 1 if it worked, or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n &= 1l << index));
}
