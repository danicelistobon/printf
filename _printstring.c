#include "holberton.h"
/**
* _printstring - prints a string
*
* @argl: argument list
*
* Return: the number of characters printed
*/
int _printstring(va_list argl)
{
	int i = 0, count = 0;
	char *str;

	str = va_arg(argl, char*);

	if (str == NULL)
		str  = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}

