#include "main.h"
/**
 *print_square - draws a square
 *@size: length and width of square
 *
 *Return: 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
