#include "main.h"

/**
 * *_strcpy - have to copies the string pointed to by src
 * @dest: char type string of the integer
 * @src: char type string of the integer
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by dest of the integer
 * Return: Pointer to dest of the integer
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
