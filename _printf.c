#include "main.h"

/**
* _printf - prints argument to the standard output
* @format: formatted string;
* @...: list of other arguments;
* Return: int;
*/

int _printf(const char *format, ...)
{
	int count = 0;
	va_list list_args;

	if (format == NULL)
		return (-1);

	va_start(list_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			count += _print_char(*format);
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
				count += _print_char(var_args(list_args, int));
			else if (*format == 's')
				count += _print_string(var_args(list_args, char *));
			else if ((*format == 'd') || (*format == 'i'))
				count += _print_digit(list_args);
			else if (*format == '%')
			{
				count += _print_char('%');
			}
		}
		format++;
	}
	va_end(list_args);
	return (count);
}
