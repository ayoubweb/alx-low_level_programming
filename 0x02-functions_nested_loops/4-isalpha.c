#include "main.h"
/**
 * _isalpha - funct
 * @ch: is the int
 * Return: 0
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
