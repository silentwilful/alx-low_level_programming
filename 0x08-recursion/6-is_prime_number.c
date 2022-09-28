#include "main.h"

/**
 * prime_a - main - check the code
 * @j: power number
 * @i: number
 * Return: Always 0.
 */

int prime_i(int i, int j)
{

	if (i <= 1 || (i != j && i % j == 0))
	{

		return (0);

	}

		else if (i == j)
	{

		return (1);

	}

	return (prime_i(i, j + 1));

}


/**
 * is_prime_number - main - check the code
 * @n: number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{

	return (prime_i(n, 2));

}
