#include <stdio.h>
#include "main.h"

/**
 * main - Prints the numnber of arguments passed
 * @argc: number of arguments
 * @argv: the arrays
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
