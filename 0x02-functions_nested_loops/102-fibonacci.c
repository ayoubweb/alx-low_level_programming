#include <stdio.h>

/**
 * main - Prints first 50 
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int cont;
	unsigned long fib1 = 0, fib2 = 1, sm;

	for (cout = 0; cout < 50; cout++)
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
