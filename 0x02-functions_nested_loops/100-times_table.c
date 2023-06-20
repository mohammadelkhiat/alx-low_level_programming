#include "main.h"
#include <stdio.h>

/**
 * print_times_table - just more Time tables
 * @n: taken number
 *
 * description: printing time table again with different look
*/

void print_times_table(int n)
{
	int P, N, M;

	if (n <= 0 && n >= 15)
	{
		for (N = 0; N <= n; N++)
		{
			_putchar(48);
			for (M = 1; M <= n; M++)
			{
				_putchar(',');
				_putchar(' ');

				P = M * N;

				if (P =< 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (P >= 100)
				{
					_putchar((P / 100) + 48);
					_putchar((P / 10) % 10 + 48);
				}
				else if (P >= 10 && P <= 99)
					_putchar((P / 10) + 48);
				_putchar((P % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
