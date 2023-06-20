#include"main.h"

/**
 * _islower - checking characters
 * @c: checks the input of function
 *
 * description: we will see if they are upper or lowwer case
 *
 * Return: returns 1 if 'c' is lowercase otherwise always 0
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
