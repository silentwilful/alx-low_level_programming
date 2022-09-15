#include "main.h"
/**
 *print_diagonal - draw iine diagonally
 *@n: input length display
 *
 *Return: 0
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
