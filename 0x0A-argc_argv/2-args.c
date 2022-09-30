#include <stdio>
/**
 *main - program that prints all arguments it recieves
 *@argc: count of arguments
 *@argv: array pointing to string
 *
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
