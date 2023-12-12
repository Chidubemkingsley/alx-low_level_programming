#include "main.h"
/**
 * _strncat - tasked to concatenates two strings,
 * @dest: destination of the integer
 * @src: source of the integer
 * @n: amount of bytes used from src of the integer
 * Return: the pointer to dest of the integer
 */
char *_strncat(char *dest, char *src, int n)
{
	int space1 = 0, space2 = 0;

	while (*(dest + space1) != '\0')
	{
		space1++;
	}

	while (space2 < n)
	{
		*(dest + space1) = *(src + space2);
		if (*(src + space2) == '\0')
			break;
		space1++;
		space2++;
	}
	return (dest);
}
