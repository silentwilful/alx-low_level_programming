#include "main.h"
/**
 *print_most_numbers - printing numbers from 0 to 9
 *Description: Prints the numbers excluding 2 and 4
 *followed by new line
 *Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
