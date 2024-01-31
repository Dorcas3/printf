#include "main.h"

/**
* _print_string - handles printing only strings to the standard output
* @str: list of arguments;
* Return: int;
*/

int _print_string(va_list str)
{
	char *string = va_arg(str, char *);
	int str_len = 0;

	while (string[str_len] != '\0')
		str_len++;
	write(1, string, str_len);
	return (str_len);
}
