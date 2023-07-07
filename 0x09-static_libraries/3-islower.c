#include "main.h"
/**
 * _islower - check the cod for Holberton Schol student.
 *
 * @c:  is a paramet
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
