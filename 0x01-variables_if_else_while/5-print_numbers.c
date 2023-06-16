#include <stdio.h>

/**
 * main - numbers
 *
 * description: printing all singels numbers to 10
 *
 * Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
