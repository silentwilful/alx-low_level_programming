#include "main.h"

/**
 *print_rev - printing a string reverse
 *@s: reverse printing of a  string
 *Desciption: prints string in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
