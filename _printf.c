#include "holberton.h"
/**
* _printf - prints anything
*
* @format: types of arguments passed to the function
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list argl;
	int count = 0;

	va_start(argl, format);

	if (format == 0)
		return (-1);

	count = _printfaux(argl, format);

	va_end(argl);

	return (count);
}
