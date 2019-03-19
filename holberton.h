#ifndef PRINTF
#define PRINTF

#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

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
void _swap(char *a, char *b);
int _strcmp(const char *s1, const char *s2);
int (*getForm(const char *s))(va_list c);
char *_reverse(char *buffer, int i, int j);
int _abs(int n);
char *_itoa(int value, char* buffer, int base);


#endif
