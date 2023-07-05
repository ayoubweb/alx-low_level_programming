#include "main.h"
/**
 * _print_rev_recurson - prints strng in reverse
 * @s: ponter to the strng
 * Return: vod
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
