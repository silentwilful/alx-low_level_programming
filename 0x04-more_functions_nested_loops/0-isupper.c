#include "main.h"

/**
 *_isupper - ckecks the uppercase letters
 *@c: character to check
 *
 *Return: 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
		return (1);
	
		return (0);
}
