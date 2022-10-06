#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creating an array of integers
 * @min: minimum value input in memory
 * @max: maximum input
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, size;
	int *p;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
