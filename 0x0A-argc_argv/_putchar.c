#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c:Ther character to print
 *
 * Return: 1 On success .
 * return -1 on error and  errno is set appropriately.
 */

int _putchar(char c)
{

return (write(1, &c, 1));

}
