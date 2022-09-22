#include "main.h"
/**
 *reverse_array - reversing of an array
 *@a: array to integers to be reversed
 *@n: length of elements to be swapped
 *
 *Return: zero
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n = n - 1;

	while (i < n)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = tmp;
		i++;
		n--;
	}
}
