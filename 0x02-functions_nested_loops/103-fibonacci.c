#include <stdio.h>

/**
 * main - Prints the sum
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsm;
	float tot_sm;

	while (1)
	{
		fibsm = fib1 + fib2;
		if (fibsm > 4000000)
			break;

		if ((fibsm % 2) == 0)
			tot_sm += fibsm;

		fib1 = fib2;
		fib2 = fibsm;
	}
	printf("%.0f\n", tot_sm);

	return (0);
}
