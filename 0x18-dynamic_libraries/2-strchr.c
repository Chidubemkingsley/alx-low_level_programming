#include "main.h"

/**
  * _strchr - locate character in string of its file path
  * @s: source string of the integer
  * @c: character to find of the integer
  *
  * Return: the string from character found in the memory
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
