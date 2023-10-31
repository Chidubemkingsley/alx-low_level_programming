#include "main.h"

/**
 * create_file - scripted to just create a file scripted
 * @filename: scripted to show the filename scripted
 * @text_content: this script runs the text content of its own script
 *
 * Return: 1 script to show. -1 failure
 */
int create_file(const char *filename, char *text_content)
{
int caesar;
int kings;
int block;

if (!filename)
return (-1);

caesar = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (caesar == -1)
return (-1);

if (!text_content)
text_content = "";

for (kings = 0; text_content[kings]; kings++)
;
block = write(caesar, text_content, kings);

if (block == -1)
return (-1);

close(caesar);

return (1);
}
