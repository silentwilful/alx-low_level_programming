#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints combinations of single-digit numbers
 *
 *Return: Always 0
 */

int main(void)
{
	int index = 0;

	while (index < 10)
	{
		printf("%d", index);
		index++;
	}
	putchar('\n');
	return (0);
}
