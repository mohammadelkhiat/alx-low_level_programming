#include <stdio.h>
#include "main.h"

/**
 * main - getting sum of ###
 *
 * description: Brrrr
 *
 * Return: Always 0
*/

int main(void)
{
	int X, N;

	for (N = 0; N < 1024; N++)
	{
		if ((N % 3 == 0) || (N % 5 == 0))
			X += N;
	}
	printf("%d\n", X);

	return (0);
}
