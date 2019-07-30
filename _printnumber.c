#include "holberton.h"
/**
* _printnumber - prints a number
*
* @argl: argument list
*
* Return: the number of characters printed
*/
int _printnumber(va_list argl)
{
	int num, i = 1, count = 0;
	unsigned int n;
	char c;

	num = va_arg(argl, int);

	if (num < 0)
	{
		c = '-';
		count = count + write(1, &c, 1);
		n = -num;
	}
	else
		n = num;

	while (n / i > 9)
		i *= 10;

	return (count);
}
