#include "main.h"

/**
 * _print_string - handles printing only strings to the standard output
 * @str: list of arguments;
 * Return: int;
 */

int _print_string(char *str)
{
	int str_len = 0;

	while (*str != '\0')
	{
		str_len += _print_char(*str);
		++str;
	}
	return (str_len);
}
