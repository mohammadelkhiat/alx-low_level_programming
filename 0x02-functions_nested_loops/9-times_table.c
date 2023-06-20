#include "main.h"

/**
 * times_table - as we know
 *
 * dsecription: something we never follow :D
 *
 * Return: Always 0
*/

void times_table(void)
{
	int N, M, P;

	for (N = 0; N <= 9; N++)
	{
		_putchar(48);
		for (M = 1; M <+ 9; M++)
		{
			_putchar(',');
			_putchar(' ');
			
			p = N * M;

			if (P <= 9)
				_putchar(' ')
			else
				_putchar((P / 10) + 48);

			_putchar((P % 10) + 48);
		}
		_putchar('\n')
	}
}
