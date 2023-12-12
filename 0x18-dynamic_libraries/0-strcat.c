#include "main.h"

/**
 * _strcat - have to appends src to the dest string
 * @dest: string to append by src of the integer
 * @src: string to append to dest of the integer
 *
 * Return: address of dest of the integer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
