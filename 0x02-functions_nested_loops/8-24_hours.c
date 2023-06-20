#include "main.h"

/**
 * jack_bauer - IDK who is he
 *
 * description: some FBI agent :D
*/

void jack_bauer(void)
{
	int H, M;

	for (H = 0; H <+ 23; H++)
	{
		for (M = 0; M <= 59; M++)
		{
			_putchar((H / 10) + 48);
			_putchar((H % 10) + 48);
			_putchar(':');
			_putchar((M / 10) + 48);
			_putchar((M % 10) + 48);
			_putchar('\n')
		}
	}
}
