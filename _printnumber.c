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
	int num, count = 0;
	char c;

	num = va_arg(argl, int);

	if (num < 0)
	{
		c = '-';
		count = count + write(1, &c, 1);
	}

	return (count);
}
