#include "main.h"
/**
 * _strlen - lngth of a str
 * @s: input char
 * Return: lngth of a str
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
