#include <stdio.h>

/**
 * main - NumberZ
 *
 * description: Orinting number Z
 *
 * Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');
	return (0);
}
