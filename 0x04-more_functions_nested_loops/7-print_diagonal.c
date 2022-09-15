#include "main.h"
/**
 *print_diagonal - draw iine diagonally
 *@n: input length display
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int line, lo;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= line; line++)
		{
			for (lo = 1; lo < line; lo++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
