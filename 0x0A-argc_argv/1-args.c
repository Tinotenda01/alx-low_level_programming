#include <stdio.h>

/**
 * main -  Prints number of arguments
 *
 * @argc: arguement count
 * @argv: array of pointers to CLI arguement
 *
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}

