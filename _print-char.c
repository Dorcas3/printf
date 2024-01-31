#include "main.h"

/**
* _print_char - handles printing only characters to the standard output
* @chara: list of arguments;
* Return: int;
*/

int _print_char(va_list chara)
{
	char character = va_arg(chara, int);
	return (write(1, &character, 1));
}
