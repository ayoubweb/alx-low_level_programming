#include <unistd.h>

/**
 * _putchar - writes te character c to stout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * On error, -1 is retrned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
