#include "main.h"

/**
 * print_to_98 - 98 Battery Street, the OG
 * @n: input
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			_putchar(count + 48);
			_putchar(',');
			_putchar(' ');
	else
		for (count = 0; count < 98; count++)
			_putchar(count + 48);
			_putchar(',');
			_putchar(' ');
	_putchar(98 + 48);
	_putchar('\n');
}
