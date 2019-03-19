#ifndef PRINTF
#define PRINTF

#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct ftoFunc - struct holding string and function
 * @form: string to convert to function
 * @f: function to run
 *
 * Description: Converts a string to a function to use
 */
typedef struct ftoFunc
{
	char *form;
	int (*f)(va_list c);
} strTp;

int charForm(va_list c);
int _putchar(char c);
int _printf(const char *format, ...);
char *strForm(char *);
int modForm(int n);

int _strlen(char *s);
int _puts(char *str);
char *_strcpy(char *dest, char *src);
void _swap(char *a, char *b);
int _strcmp(const char *s1, const char *s2);
int (*getForm(const char *s))(va_list c);
char *_reverse(char *buffer, int i, int j);
int _abs(int n);
char *_itoa(int value, char *buffer, int base);


#endif
