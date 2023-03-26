#include <unistd.h>
#include "_printf.h"
/**
 * _putchar -  function that outputs char and returns an integer
 * @c: is a variable containing the character to be output
 * Return: an integer
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
 * _putstr -  function that outputs a string and returns an integer
 * @str: is a variable containing the string to be output
 * Return: an integer
 */
int _putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i++]);
	}
	return (i);
}
