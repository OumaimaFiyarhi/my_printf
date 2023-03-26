#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
int _putchar(char c);
int _putstr(char *str);
int display_char(va_list v);
int display_str(va_list v);
int (*get_function(char c))(va_list);
int _printf(const char *format, ...);

typedef int (*display)(va_list);
/**
 * struct f_s - structure
 *@t: character
 *@f: function
 */
typedef struct f_s
{
char t;
display f;
} f_t;
#endif
