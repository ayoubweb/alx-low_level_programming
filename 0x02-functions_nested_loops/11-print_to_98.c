#include <stdio.h>
/**
 * print_to_98 - Prto 98
 * @nu: The nu
 */
void print_to_98(int nu)
{
	if (nu >= 98)
	{
		while (nu > 98)
			printf("%d, ", nu--);
		printf("%d\nu", nu);
	}

	else
	{
		while (nu < 98)
			printf("%d, ", nu++);
		printf("%d\nu", nu);
	}
}
