#ifndef MAIN_H
#define MAIN_H
#define BUFF_SIZE 1024

#include <stdarg.h>
#include <unistd.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _print_char(char chara);
int _print_string(char *str);
int _print_digit(va_list digit);


#endif
