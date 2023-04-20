#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *  Description: print a quote using write function
 *  ssize_write(int fd, const void *buf, size_t count);
 *  Return: Always 1 (success)
 */
int main (void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
return (1);
}
