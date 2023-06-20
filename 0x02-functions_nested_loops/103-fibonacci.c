#include <stdio.h>

/**
 * main - more Fibonacci
 *
 * description: Naah.
 *
 * Return: Always 0
*/

int main(void)
{
	unsigned long v1 = 0, v2 = 1, vs;
	float total_sum;

	while (1)
	{
		vs = v1 + v2;

		if (vs > 4000000)
			break;
		if ((vs % 2) == 0)
			total_sum += vs;
		v1 = v2;
		v2 = vs;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
