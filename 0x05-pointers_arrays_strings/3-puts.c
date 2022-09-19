#include "main.h"
/**
 *_puts - print stdout string
 *@*str: printing out a string
 *Description: string print
 *Return: void
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}

