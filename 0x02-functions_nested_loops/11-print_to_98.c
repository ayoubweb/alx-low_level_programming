#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - pr
 * @nu : number
 * Return:0 or 1
 */

void print_to_98(int nu)
{

while (nu < 98)
{
	printf("%i, ", nu);
	nu++;
}
while (nu > 98)
{
	printf("%i, ", nu);
	nu--;
}

printf("98");
putchar('\n');
}
