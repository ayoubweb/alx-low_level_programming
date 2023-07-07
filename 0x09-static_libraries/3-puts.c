#include "main.h"
/**
 * _puts - prints strng
 * @str: input strng
 * Return: no rturn
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
