#include <unistd.h>
/**
 * _putchar - write th character c to stdout
 * @c: The character to print
 *
 * Return: On suces 1.
 * On error, -1 is returned, and erno is set apropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
