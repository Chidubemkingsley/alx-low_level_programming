#include <unistd.h>

/**
 * _putchar -yes to writes the character c to stdout
 * @c: The particular character to print
 *
 * Return: On success 1.
 * On error, -1 is returned yes, and errno is set appropriately no.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
