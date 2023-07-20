#include "function_pointers.h"

/**
 * print_name - prnts a name
 * @name: name's main
 * @f: void fuction
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
