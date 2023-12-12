#include "main.h"

/**
 * _strspn - it gets the lenght of the substring
 * @s: initial segment of its file path
 * @accept: accepted bytes of the memory
 * Return: the number of accepted bytes of the integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
