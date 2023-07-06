#include "main.h"
/**
 * last_index - returns the last index of a string (counts the null char)
 * @st: pointer the string
 * Return: int
 */
int last_index(char *st)
{
	int n = 0;

	if (*st > '\0')
		n += last_index(st + 1) + 1;

	return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @st: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *st)
{
	int end = last_index(st);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @st: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */


int check(char *st, int start, int end, int pair)
{

	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (st[start] != st[end])
		return (0);
	else
		return (check(st, start + 1, end - 1, pair));
}
