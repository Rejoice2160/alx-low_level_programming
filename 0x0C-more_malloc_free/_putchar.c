#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, return -1, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
