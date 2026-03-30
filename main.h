#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handler_format(char specifier, va_list args);
int print_pourcent(void);
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);

#endif
