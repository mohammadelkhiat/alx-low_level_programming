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
	int P, M, N;

	if (n <= 15 && n >= 0)
	{
		for (N = 0; n >= N; N++)
		{
			_putchar(48);
			for (M = 1; n >= M; M++)
			{
				_putchar(',');
				_putchar(' ');

				P = M * N;

				if (P <= 9)
					_putchar(' ');
				if (P <= 99)
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
