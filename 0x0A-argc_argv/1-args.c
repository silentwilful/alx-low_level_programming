#include <stdio.h>
/**
*main - prnting number of arguments
*@argc: number of arguments
*@argv: array pointing to arguments
*
*Return: 0
*/
int main(int argc, char *argv[])
{

	(void)argv;

	printf("%d\n", (argc - 1));

	return (0);
}
