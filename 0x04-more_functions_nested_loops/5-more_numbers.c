include "main.h"
/**
 *more_numbers - prints numbers 10 times
 *Description: from 0 to 14
 *followed by new line
 *
 *Return: 0
 */
void more_numbers(void)
{
	int y, ex;

	for (ex = 0; ex < 10; ex++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
