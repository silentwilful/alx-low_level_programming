#include "main.h"
/**
 *_print_rev_recursion - printing a string reverse
 *@s:  character string
 *
 *
 *Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
