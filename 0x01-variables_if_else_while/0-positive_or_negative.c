#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - + is better than -
 *
 * description: If statment
 *
 * Return: Always 1 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else if
		printf("%i is zero\n", n);
	return (0);
}
