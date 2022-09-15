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
	int j, i = 0;

	for (j = 0; j < 10; j++)
	{
		while (i <= 14)
		{
			if (i / 10 != 0)
			{
				_putchar (i / 10 + '0');
			}
			_putchar (i % 10 + '0');
			i++;
		}
		i = 0;
		_putchar (10);
	}
}
