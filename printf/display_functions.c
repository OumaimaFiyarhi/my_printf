#include "_printf.h"
/**
 * display_char - function that displays characters
 * @v: variable of typr va_list
 * Return: integer
 */
int display_char(va_list v)
{
	char c;
	int ret;

	c = va_arg(v, int);
	ret = _putchar(c);
	return (ret);
}
/**
 * display_str - function that displays strings
 * @v: variable of typr va_list
 * Return: integer
 */
int display_str(va_list v)
{
	char *str;
	int ret;

	str = va_arg(v, char *);
	if (str)
	{
		ret = _putstr(str);
	}
	else
	{
		ret = _putstr("(nil)");
	}
	return (ret);
}
