#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints a formated string
 * @format: string to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, validator = 0, side_count = 0, total_count = 0, i = 0;
	va_list ap;

	if (format == 0)
		return (-1);
	va_start(ap, format);
	validator = check_string(format);
	if (validator == 0)
	{
		total_count = p_string(format);
		return (total_count);
	}
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			if (check_next_char(format + i))
			{
				side_count += get_function(format[i + 1])(ap);
				i += 2;
			}
			else
			{
				if (format[i + 1] == '%')
				{
					i++;
					count += p_char(format[i]);
					i++;
				}
				else if (format[i + 1] == 0)
					return (-1);
				else
				{
					count += p_char(format[i]);
					i++;
				}
			}
		}
		else
		{
			count += p_char(format[i]);
			i++;
		}
	}
	total_count = side_count + count;
	va_end(ap);
	return (total_count);
}
