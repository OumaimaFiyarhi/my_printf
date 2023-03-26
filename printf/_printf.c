#include "_printf.h"
#include <stdarg.h>
/**
 *_printf - displays content
 * @format: string to be printed containing formatting
 * Return: an integer
 */
int _printf(const char *format, ...)
{
	int ret = 0;
	int i = 0;
	display f;
	va_list v;

	va_start(v, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				ret += _putchar('%');
			}
			else
			{
				f = get_function(format[i + 1]);
				if (f)
				{
					ret += (*f)(v);
				}
			}
			i += 2;
		}
		else
		{
			ret += _putchar(format[i]);
			i++;
		}
	}
	return (ret);
}
