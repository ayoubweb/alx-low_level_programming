#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @t: pointer the string
 * Return: int
 */
int _strlen_recursion(char *t)
{
	int n = 0;

	if (*t > '\0')
	{
		n += _strlen_recursion(t + 1) + 1;
	}

	return (n);
}
