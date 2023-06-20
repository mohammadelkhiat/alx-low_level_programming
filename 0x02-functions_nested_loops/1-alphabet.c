#include"main.h"

/**
 * main - printing lowwercase with _putchar
 *
 * Description: no using of stdio.h
*/

void main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
