#include "main.h"
/**
* _puts - fonction qui imprime une chaîne de caractères
* @str: pointeur de caractère
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
