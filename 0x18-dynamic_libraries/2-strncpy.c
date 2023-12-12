#include "main.h"
/**
 * _strncpy - copies a string of the particular program
 * @dest: destination of the source file
 * @src: source of the file
 * @n: amount of bytes from src of the file
 * Return: the pointer to dest of the file
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
