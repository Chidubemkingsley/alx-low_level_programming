#include "main.h"
#include <stdio.h>

/**
 * error_file - scripted to show the error file in the script
 * @file_from: scripted to give the file from
 * @file_to: scripted to show the file to
 * @argv: scripted to show the argument file
 * Return: provide no return
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - scripted to show the result script of hoberton students
 * @argc: scripted to show the no of argument
 * @argv: scripted to show the argument vectors
 * Return: scripted to show Always 0.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t caesar, block;
char buf[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);

caesar = 1024;
while (caesar == 1024)
{
caesar = read(file_from, buf, 1024);
if (caesar == -1)
error_file(-1, 0, argv);
block = write(file_to, buf, caesar);
if (block == -1)
error_file(0, -1, argv);
}

err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close caesar %d\n", file_from);
exit(100);
}

err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close caesar %d\n", file_from);
exit(100);
}
return (0);
}

