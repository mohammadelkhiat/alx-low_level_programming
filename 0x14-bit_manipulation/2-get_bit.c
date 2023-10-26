#include "main.h"
/**
 * get_bit - main funcation
 * @index: is the index, starting from 0 of the bit you want to get
 * @n: unsigned long int
 * Return: the value of the bit at index index or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
