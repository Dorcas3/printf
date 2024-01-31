#include "main.h"

/**
* _print_char - handles printing only characters to the standard output
* @chara: list of arguments;
* Return: int;
*/

int _print_char(char chara)
{
	return (write(1, &chara, 1));
}
