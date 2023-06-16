#include <stdio.h>

/**
 * main - all possible combinations
 *
 * description: printing all possible combinations of single-digit numbers
 *
 * Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
