#include "main.h"

/**
 * print_last_digit - 0_0
 * @n: taken input
 *
 * description: ^_^
 *
 * Return: LD
*/

int print_last_digit(int n)
{
	int LD;
	
	if (n > 0)
		LD = n % 10;
	else
		LD = -1 * (n % 10);
	
	_putchar(48 + LD);
	return (LD);
}
