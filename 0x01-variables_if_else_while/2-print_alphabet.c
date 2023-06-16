#include <stdio.h>

/**
 * main - Alphapet
 *
 * description: Printing alphapet with putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
