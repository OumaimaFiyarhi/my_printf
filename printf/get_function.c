#include "_printf.h"
/**
 * get_function - is a pointer to display_function
 * @c: the character after %
 * Return: an integer
 */
int (*get_function(char c)) (va_list)
{
	int i;
	f_t t[] = {
		{'c', display_char},
		{'s', display_str},
		{'\0', NULL}
	};

	i = 0;
	while (t[i].f)
	{
		if (t[i].t == c)
		{
			return (t[i].f);
		}
		i++;
	}
	return (NULL);
}
