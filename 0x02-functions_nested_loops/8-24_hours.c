#include "main.h"
/**
 * jack_bauer - func
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int min = 0;
	int h_remainder;
	int min_remainder;

	while (h <= 23)
	{
	while (min <= 59)
	{
	min_remainder = min % 10;
	h_remainder = h % 10;
	_putchar(h / 10 + '0');
	_putchar(h_remainder + '0');
	_putchar(':');
	_putchar(min / 10 + '0');
	_putchar(min_remainder + '0');
	min++;
	_putchar('\n');
	}
	h++;
	min = 0;
}
}
