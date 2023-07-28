#include <unistd.h>

/**
 * _putchar - write the caracter c to stdut
 * @c: The charater to print
 *
 * Return: On sucess 1.
 * On error, -1 is returnd, and erno is set apropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
