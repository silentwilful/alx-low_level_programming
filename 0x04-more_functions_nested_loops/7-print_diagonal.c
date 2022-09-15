#include "main.h"
/**
 *print_diagonal - draw iine diagonally
 *@n: integer display
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(98);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
