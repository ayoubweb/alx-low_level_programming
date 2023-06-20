#include "main.h"
/**
 * _islower - func
 *  @ch:  is the int 
 * Return: 0
 */
int _islower(int ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
