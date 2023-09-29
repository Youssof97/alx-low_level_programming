#include "main.h"

/**
 * _print_rev_recursion - prints a string in a reverse order
 * @s: the string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(&s[1]);
	_putchar(s[0]);
}
