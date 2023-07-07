#include "main.h"
/**
* _strspn - Gets th length of a prefix substrng.
* @s: String where substring wil lok.
* @accept: Substrng of acepted chars.
* Return: Legth of ocurence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
