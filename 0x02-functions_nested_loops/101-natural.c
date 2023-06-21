#include <stdio.h>
#include <stdlib.h>
/**
 * main - 
 * Description: comp
 * Return: 0
 */
int main(void)
{
	int b = 0;
	int sm = 0;

	while (b < 1024)
	{
		if (b % 3 == 0 || b % 5 == 0)
		{
			sm += b;
		}

		b++;
	}
	printf("%i\n", sm);
	return (0);
}
