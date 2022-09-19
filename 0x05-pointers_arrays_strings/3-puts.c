#include "main.h"
/**
 *_puts - print stdout string
 *@str: printing out a string
 *Description: string print
 *Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

