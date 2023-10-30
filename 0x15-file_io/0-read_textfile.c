#include "main.h"

/**
 * read_textfile - this is the script that read and write text file legibly
 * @filename: scripted to shown filename script
 * @letters: scripted to show number of letters legibly
 *
 * Return: scripted to return no of letters. failure then you  returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int caesar;
ssize_t go, come;
char *buf;

if (!filename)
return (0);

caesar = open(filename, O_RDONLY);

if (caesar == -1)
return (0);

buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);

go = read(caesar, buf, letters);
come = write(STDOUT_FILENO, buf, go);

close(caesar);

free(buf);

return (come);
}
