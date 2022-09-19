#include "main.h"
/**
 *puts_half - prints half of string
 *@str: / string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int x, y = 0;

	while (*(str + y))
		y++;
	x = y / 2;
	if (y % 2)
		x += 1;
	while (x < y)

	{
		_putchar(*(str + y));
		x++;
	}
	_putchar('\n');
}

