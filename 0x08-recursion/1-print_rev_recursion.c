#include "main.h"
/**
 * _print_rev_recurson - prints strng in reverse
 * @t: ponter to th strng
 * Return: void
 */
void _print_rev_recursion(char *t)
{
	if (*t > '\0')
	{
		_print_rev_recursion(t + 1);
		_putchar(*t);
	}

}
