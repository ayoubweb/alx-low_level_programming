#include "main.h"

/**
 * largest_number - ret
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
int largest;

if (x > y && x > z)
{
	largest = x;
}
else if (y > z && y > x)
{
	largest = y;
}
else if (z > y)
{
	largest = z;
}
else
{
	largest = y;
}

return (largest);
}
