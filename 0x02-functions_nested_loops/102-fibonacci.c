#include <stdio.h>

/**
 * main - Print
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	unsigned long fib1 = 0, fib2 = 1, sm;

	for (cont = 0; cont < 50; cont++)
	{
		sm = fib1 + fib2;
		printf("%lu", sm);

		fib1 = fib2;
		fib2 = sm;

		if (cont == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
