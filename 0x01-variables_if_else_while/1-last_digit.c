#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - A program to determine the random number
 *
 * Return: Always 0 (Success)
 **/

int main(void)
{
	int n, lastDigit;
	
	srand(time(0));
	
	n = rand() - RAND_MAX / 2;
	
	lastDigit = n % 10;

	if (lastDigit  > 5)
	{
		printf("Last digit of %d s %d and is greater than 5\n", n, digit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d s %d and is 0\n", n, digit);
	}
	else
	{
		printf("Last digit of %d s %d and is less than 6 and not 0/n", n, digit);
	}
	
	return (0);
}
