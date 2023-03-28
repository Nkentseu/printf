#include "main.h"

/**
 * _printf - printf a special char (%s and %c)
 * @format: format of printf
 * Return: number character printing
 */
int _printf(char *format, ...)
{
	va_list ap;
	int i = 0;
	int number = 0;
	
	if (format == 0)
		return (0);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 's')
				number += _puts((char *)va_arg(ap, char *));
			else if (format[i] == 'c')
				number += _putc((int)va_arg(ap, int));
			else if (format[i] == '%')
				number += _putc('%');
			else if (format[i] == 'd' || format[i] == 'i')
				number += _puti((int)va_arg(ap, int));
			else if (format[i] == 'b')
				number += _putb((int)va_arg(ap, int));
			else
			{
				number += _putc('%');
				if (format[i] == '\0')
					return (number);
				number += _putc(format[i]);
			}
		}
		else
			number += _putc(format[i]);
		i++;
	}
	va_end(ap);
	return (number);
}
