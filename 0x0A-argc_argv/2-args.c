#include <stdio.h>
#include "main.h"

/**
 * main - prints the argument id has received
 * @argc: number of arguments
 * @argv: The array of arguments
 * Return: 0 for Success
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
