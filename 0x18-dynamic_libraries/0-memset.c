#include "main.h"

/**
 * _memset -fill memory with constant values
 * @s: pointer to char params of the memory
 * @b: constant byte of the integer
 * @n: byte of mem area of integer
 * Return: *s of the memory allocation
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
