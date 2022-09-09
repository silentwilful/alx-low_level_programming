#include <time.h>
#include <stdlib.h>
/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *Return: Always 0
 **/
int main(void)
{
	int c;

	for (c = 48; c <= 102; c++)
	{
		if ((c >= 48 && c <= 57) || (c >= 97 && c <= 102))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

