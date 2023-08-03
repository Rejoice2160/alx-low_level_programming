#include "main.h"

/**
* get_bit - return the value of bit in an index to a decimal number
* @n: numbers to search
* @index: index of a bit
*
* Return: value of a bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
return (-1);
bit_val = (n >> index) & 1;

return (bit_val);
}
