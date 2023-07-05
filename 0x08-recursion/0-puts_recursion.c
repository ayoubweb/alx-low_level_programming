#include "main.h"
/**
 * _puts_recursion - prints a strng, followed by a new line
 * @t: pointer o the string
 * Return: void
 */
void _puts_recursion(char *t)
{

	if (*t == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*t);
		_puts_recursion(t + 1);
	}

}
