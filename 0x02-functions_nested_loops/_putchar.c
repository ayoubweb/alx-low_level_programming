#include <unistd.h>

/**
 * _putchar - write c
 * Return: on 1
 * 
 */

 int _putchar(char c)
 {
	return(write(1, &c, 1));
 }