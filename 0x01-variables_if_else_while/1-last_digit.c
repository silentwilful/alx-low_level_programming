#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - last digit
 *
 * Return: Always 0
 **/

int main(void)
{
	int n, last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	value = (n % 10);

	printf("Last digit of %d is ", n, value);
	if (value  > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (value == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0/n")
	}
	return (0);
}
