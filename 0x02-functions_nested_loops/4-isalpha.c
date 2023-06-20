#include"main.h"

/**
 * _isalpha - checking characters
 * @c: checks the input of function
 *
 * description: we will see if they are upper or lowwer case
 *
 * Return: returns 1 if 'c' is uppercase otherwise always 0
*/

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
