#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int len, len2;

	len = _printf("Let's try %c to printf a %s simple sentence.\n", 'h', "string");
	len2 = printf("Let's try %c to printf a %s simple sentence.\n", 'h', "string");
	_printf("This is a string %c\n", 'h');
	_printf("This is also a sting\n");
	_printf("That's a %s!\n", "penis");
	_printf("%i\n", 5);
	_printf("%d\n", 4);
	_printf("This is a number: %d\n", 22);
	_printf("This is a char: %c\nThis is a string: %s\nThis is a number: %d\n", 'c', "String", 432);
	_printf("%d\n", 1234567890);
	_printf("%d%c%s\n", 2, 'e', "string");
	_printf("%s %d%c%c\n", "That's a penis!", 8, '=', 'D');
	_printf("Len of _printf: [%d]\n", len);
	printf("Len of printf: [%d]\n", len2);
	return (0);
}
