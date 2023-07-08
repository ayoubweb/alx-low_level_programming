#include <stdio.h>
/**
 * main - prints its nme, folowed by a nw line
 * @argc: n arg
 * @argv: arr arg
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
