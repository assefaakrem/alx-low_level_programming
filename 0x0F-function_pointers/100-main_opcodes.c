#include "function_pointers.h"

/**
 * main -  prints the opcodes of its own main function.
 * @argc: integer value.
 * @argv: character value.
 *
 * Return: 0(success)
 */

int main(int argc, char **argv)
{
	int i, bytes;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	addr = (char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", addr[i]);
	printf("%02hhx\n", addr[i]);
	return (0);
}
