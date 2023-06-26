#include "main.h"

/**
 * _isupper - checks if  character  uppercase
 * @c:  is the int that will use for 
 * Return: 1 if uppercase character 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
