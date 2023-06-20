#include"main.h"

/**
 * print_alphabet - printing lowwercase with _putchar
 *
 * Description: no using of stdio.h
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
