#include "main.h"

/**
* append_text_to_file - To append text at the end of a file.
* @filename: A pointer to name the file.
* @text_content: A string to be added at the end of a file.
*
* Return: If a function fails or a filename is NULL - -1.
*         If a file does not exist the user lack permission to write - -1.
*         Otherwise write - 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
