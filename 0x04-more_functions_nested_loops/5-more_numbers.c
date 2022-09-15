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
	int i, ex;

	for (ex = 0; ex < 10; ex++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
