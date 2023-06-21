#include "main.h"
/**
 * times_table - Pr
 */
void times_table(void)
{
	int nu, mul, prd;

	for (nu = 0; nu <= 9; nu++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prd = nu * mul;

			if (prd <= 9)
				_putchar(' ');
			else
				_putchar((prd / 10) + '0');

			_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
