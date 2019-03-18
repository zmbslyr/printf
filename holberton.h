#ifndef PRINTF
#define PRINTF

#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define BufLen 1024

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
void _puts(char *str);
char *_strcpy(char *dest, char *src);
void _swap(int *a, int *b);
int _strcmp(const char *s1, const char *s2);
int (*getForm(const char *s))(va_list c);

#endif
