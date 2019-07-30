#include "holberton.h"
/**
* _printfaux - auxiliary function
*
* @argl: argument list
*
* @format: types of arguments passed to the function
*
* Return: the number of characters printed
*/
int _printfaux(va_list argl, const char *format)
{
	int i = 0, count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(argl, int));
					i++;
					break;
				case '%':
					_putchar('%');
					i++;
					break;
				case 's':
					count += _printstring(argl);
					count--, i++;
					break;
				case '\0':
					count = -2;
					break;
				case 'd':
				case 'i':
					count += _printnumber(argl);
					count--, i++;
					break;
				default:
					_putchar('%');
					break;
			}
		}
		else
			_putchar(format[i]);
		count++;
	}
	return (count);
}
