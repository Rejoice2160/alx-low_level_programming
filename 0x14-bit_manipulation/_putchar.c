#include "main.h"
#include <unistd.h>

/**
 * _putchar - write character  c to stdout
 * @C: The character to be printed
 *
 * Return: 1 on success.
 * On error, -1 is returned, and the errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
