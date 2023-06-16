#include <stdio.h>

/**
 * main - reversed order
 *
 * description: ptinting alphapet in backward order
 *
 * Return: 0
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
