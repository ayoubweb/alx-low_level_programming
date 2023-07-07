#include "main.h"
/**
 * _strncpy - two word
 * @dest : poiter to char par
 * @src : poiter to char par
 * @n : int par
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
