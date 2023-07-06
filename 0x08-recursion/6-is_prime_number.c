#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is a prime number
 * @num: int
 * Return: 0 or 1
 */
int is_prime_number(int num)
{
	return (check_prime(num, 2));
}
/**
 * check_prime - check all number < num if they can divide it
 * @num: int
 * @rsp: int
 * Return: int
 */

int check_prime(int num, int rsp)
{

	if (rsp >= num && num > 1)
		return (1);
	else if (num % rsp == 0 || num <= 1)
		return (0);
	else
		return (check_prime(num, rsp + 1));
}
