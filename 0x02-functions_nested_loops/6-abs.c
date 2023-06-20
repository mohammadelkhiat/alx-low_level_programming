#include "main.h"
#include <stdio.h>

/**
 * _abs - absolute value
 * @n: integer type
 *
 * description: a function that computes the absolute value of an integer.
 *
 * Return: Always 0
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
