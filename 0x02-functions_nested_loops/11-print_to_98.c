#include"main.h"

/**
 * print_to_98 - programmed to print n to 98 counts
 * separated by comma, followed
 * by space and number should be
 * printed in order of the integer counter
 *
 * @n: input of the integer
*/

void print_to_98(int n)
{
	int counter;

	if (n > 98)
		for (counter = n; counter > 98; --counter)
			printf("%d, ", counter);
	else
		for (counter = n; counter < 98; ++counter)
			printf("%d, ", counter);
	printf("98\n");
}
