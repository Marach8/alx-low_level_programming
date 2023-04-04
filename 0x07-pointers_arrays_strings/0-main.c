#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - printing buffer in hexadecimal
 * @buffer: This is the address of the memory to print
 * @size: This is the size of the memory to be printed
 * Return: It will not return anything
 */


void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;


	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}

		if (!(i % 10) && i)
		{
			printf("\n");
		}

		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - We want to check this code.
 * Return: Always 0 for Succes
 */

int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);

	return (0);
}
