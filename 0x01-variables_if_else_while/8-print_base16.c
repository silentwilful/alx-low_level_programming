#include <stdio.h>
/**
 *main - numbers of base 16 in lowercase
 *
 *Return: Always 0
 */

int main(void)
{
	int index;

	for (index = 48; index < 58; index++)
	{
		putchar(index);
	}
	for (index = 97; index < 103; index++)
	{
		putchar(index);
	}
	putchar('\n');
	return (0);
}
