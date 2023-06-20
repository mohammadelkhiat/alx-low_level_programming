#include <stdio.h>

/**
 * main - printing first 50 digits
 *
 * description: bla bla bla...
 *
 * Return: Always 0
*/

int main(void)
{
	int counts;
	unsigned long V1 = 0, V2 = 1, Vs;

	for (counts = 0; counts < 50; counts++)
	{
		Vs = V1 + V2;
		printf("%lu", Vs);

		V1 = V2;
		V2 = Vs;

		if (counts == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
