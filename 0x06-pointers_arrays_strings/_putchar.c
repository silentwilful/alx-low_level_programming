#include <unistd.h>

/**
 *_putchar - writes a character c to stdout
 *@c: Printing a character
 *
 *
 *Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
