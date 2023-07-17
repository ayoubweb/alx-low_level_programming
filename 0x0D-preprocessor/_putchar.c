#include <unistd.h>

/**
 * _putchar - writes the caracter c to stdot
 * @c: The caracter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
