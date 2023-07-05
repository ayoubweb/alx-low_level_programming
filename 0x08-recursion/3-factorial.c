#include "main.h"

/**
 * factorial - finds factorial
 * @r: int
 * Return: int
 */

int factorial(int r)
{

	if (r < 0)
	{
		return (-1);
	}
	else if (r == 0)
	{
		return (1);
	}

	return (r * factorial(r - 1));

}
