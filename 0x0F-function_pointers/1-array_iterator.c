#include <stdio.h>

/**
 * array_itertor - executs funct
 * @array: array of elemnts
 * @size: array's size
 * @action: poiter to function
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
