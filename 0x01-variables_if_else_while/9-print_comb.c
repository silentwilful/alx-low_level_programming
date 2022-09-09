#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints combinations of single-digit numbers
 *
 *Return: Always 0
 */

int main(void)
{
	int index;

	for (index = 48; index < 58; index++)
	{
		putchar(index);
		if (index != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
