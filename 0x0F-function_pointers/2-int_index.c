#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: aray of elemnts
 * @size: number of elments in th array
 * @cmp: is a pointr to the function to be used to compare values
 * Return: index first element cmp function does not return 0
 * If no elment matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
