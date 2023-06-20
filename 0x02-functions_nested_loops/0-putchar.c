#include "stdio.h"

/**
 * main - printing
 *
 * Description: Print _putchar without stdio.h
 *
 * Return: Always 0
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');
return (0);
}
