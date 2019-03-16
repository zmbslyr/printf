#include "holberton.h"

/**
 * getForm - Gets format for output
 * @s: Takes a format specifier in string format
 *
 * Return: Function pointer
 */
char (*getForm(char *s))(char c)
{
	strTp charType[] = {
		{"c", charForm},
		{"s", strForm},
		{"%", modForm},
		{NULL, NULL}
	};
	int index;

	for (index = 0; charType[index].form != NULL)
		if (_strcmp(charType[index].form, s) == 0)
			return (charType[index].f);
}
