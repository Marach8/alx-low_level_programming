#include "main.h"

/**
 * _strchr - Entry point for this code
 * @s: input
 * @c: input for the code
 * Return: Always 0 (Success) and sure
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
