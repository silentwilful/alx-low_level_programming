#include "main.h"
/**
 *main - multiplying two numbers
 *@argc: count of arguments
 *@argv: number of arrays
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;

	printf("%d\n", mul);
	return (0);
}
