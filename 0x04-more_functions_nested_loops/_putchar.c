#include <unist.h>
#include "main.h"

/**
 * _putchar - writes the character C to the stdout
 * @c: The character to print
 *
 * Return: On success 1.
 *	On error -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
