#include "main.h"
/**
 * _sqrt_recursion - find natral square rot
 * @m: int
 * Return: int
 */
int _sqrt_recursion(int m)
{
	return (square(m, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @v: square root
 * Return: int
 */

int square(int n, int v)
{

	if (v * v == m)
		return (v);
	else if (v * v < m)
		return  (square(m, v + 1));
	else
		return (-1);

}
