#include"main.h"

/**
 * print_sign - as it say :D
 * @n: integer type
 *
 * description: it prints the sign + or -
 *
 * Return: returns 1 if 'n' = 0, and return -1 if n less than 0, else returns 0
*/

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if(n > 0)
	{
		_putchar(43);
		return (1);
	}
	else (n == 0)
	{
		_putchar(48);
		return (0);
	}
}
