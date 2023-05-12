#include <stdio.h>
#include "main.h"

/**
* _atoi - convert string to integer
* @s: string to be converted
* Return: int converted from string
*/
int _atoi(char *s)
{

int a, d, c, len, g, digit;
a = 0;

d = 0;

c = 0;

len = 0;

g = 0;
digit = 0;
while (s[len] != '\0')
len++;

while (a < len && g == 0)
{
if (s[a] == '-')

++d;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';

if (d % 2)
digit = -digit;
c = c * 10 + digit;
g = 1;

if (s[a + 1] < '0' || s[a + 1] > '9')
break;
g = 0;

}

a++;
}
if (g == 0)
return (0);
return (c);
}

/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 1 (error), 0 (Success)
*/

int main(int argc, char *argv[])
{

int result, num1, num2;

if (argc < 3 || argc > 3)

{
printf("Error\n");
return (1);

}
num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);

result = num1 *num2;
printf("%d\n", result);
return (0);
}
