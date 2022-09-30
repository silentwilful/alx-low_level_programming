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
	int i, ex;

	ex = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			ex += atoi(argv[i]);
		}
	}
	printf("%d\n", ex);
	return (0);
}
