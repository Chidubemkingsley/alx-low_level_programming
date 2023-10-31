#include "main.h"

/**
 * append_text_to_file - scripted to append | text file script
 * @filename: scripted to show the file name script
 * @text_content: scripted to show text content script
 *
 * Return: 1 existence suxx. -1 failure to exist..
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int caesar;
int kings;
int block;

if (!filename)
return (-1);

caesar = open(filename, O_WRONLY | O_APPEND);

if (caesar == -1)
return (-1);

if (text_content)
{
for (kings = 0; text_content[kings]; kings++)
;

block = write(caesar, text_content, kings);

if (block == -1)
return (-1);
}

close(caesar);

return (1);
}
