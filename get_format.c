#include "holberton.h"

/**
 * getForm - Gets format for output
 * @s: Takes a format specifier in string format
 *
 * Return: Function pointer
 */
int (*getForm(const char *s))(va_list c)
{
	/* Structure with all the format types  */
	strTp charType[] = {
		{"c", charForm},
		/*{"%s", strForm},*/
		{NULL, NULL}
	};
	int index;

	/* Compares input string vs the struct and return the function associated  */
	for (index = 0; charType[index].form != NULL; index++)
		if (*s == '%')
		{
			index ++;
			if (_strcmp(charType[index].form, s) == 0)
				return (charType[index].f);
		}
	return (NULL);
}
