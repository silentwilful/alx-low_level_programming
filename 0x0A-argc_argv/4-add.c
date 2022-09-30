#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument passed to the function
 * @argv: array count
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, y = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		while (*c)
		{
			if (*c < 47 || *c > 57)
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}
		y = y + atoi(argv[i]);
	}
	printf("%d\n", y);

	return (0);

