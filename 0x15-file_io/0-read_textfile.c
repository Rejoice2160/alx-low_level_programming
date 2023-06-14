#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read the text file to print  STDOUT.
* @filename: the text file is being read
* @letters: the numbers of letters to read
* Return: the w- actual numbers of bytes to be read and printed
*         0 when a function fails or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);

}
