#include "main.h"
/**
 * print_times_table - pr
 * @nu : time
 * Return:void
 */

void print_times_table(int nu)
{

int a = 0, rep, d;

if (n < 0 || nu > 15)
	return;

while (a <= nu)
{
	for (d = 0; d <= n; d++)
	{
		rep = a * d;
		if (d == 0)
			_putchar('0' + rep);
		else if (rep < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + rep);
		}
		else if (rep < 100)
		{
			_putchar(' ');
			_putchar('0' + rep / 10);
			_putchar('0' + rep % 10);
		}
		else
		{
			_putchar('0' + rep / 100);
			_putchar('0' + (rep - 100) / 10);
			_putchar('0' + rep % 10);
		}
		if (d < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	a++;
}
}
