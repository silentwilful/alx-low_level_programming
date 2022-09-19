#include "main.h"
#include <stdio.h>
/**
 *print_array - print n elements of an arrray of integers
 *@a: arrays to print
 *@n: array size
 *Return: 0
 */
void print_array(int *a, int n)
{
	int *p = a, i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", p[i]);
		else if (i > 0)
		{
			printf(", ");
			printf("%d", p[i]);
		}
	}
	printf("%c", '\n');
}
