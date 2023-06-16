#include <stdio.h>

/**
 * main - print !e,q
 *
 * description: printing alphapet without e or q
 *
 * Return: always 0
*/

int main(void)

	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
