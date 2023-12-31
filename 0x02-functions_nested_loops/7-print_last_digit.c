#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @nu: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int nu)
{
	int last_digit = nu % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
