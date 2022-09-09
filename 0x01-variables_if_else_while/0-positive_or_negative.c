#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>


/**
 * main entry point
 *
 * executing and printing out
 * Return 0
 */

	int main(void)	
/* building up */

{	
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)

	printf("%d is positive\n", n);

	if (n < 0)

	printf("%d is negative\n", n);

	else if (n == 0)

	printf("%d is zero\n", n);



	return (0);
}
