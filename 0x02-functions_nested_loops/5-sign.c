#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @nu:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_sign(int nu)
{
	if (nu > 0)
	{
	_putchar('+');
	return (1);
}
	else if (nu < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
