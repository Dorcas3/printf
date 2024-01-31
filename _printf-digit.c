#include "main.h"

/**
* _print_digit - handles printing only digit to the standard output
* @digit: list of arguments;
* Return: int;
*/

int _print_digit(va_list digit)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(digit, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		char neg = '-';

		len += write(1, &neg, 1);
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
	{
		printf("num / div: %d\n", (num / div));
		printf("div: %d\n", div);
		div *= 10;
		printf("num here: %d\n", num);
		printf("check: %d\n", div);
	}
	for (; div != 0; )
	{
		char val = ('0' + (num / div));

	len += write(1, &val, 1);
		num %= div;
		div /= 10;
	}

	return (len);
}
