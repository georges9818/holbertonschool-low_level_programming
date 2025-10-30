#include "main.h"
/**
* print_rev - fonction qui imprime une chaîne de caractères à l'envers
* @s: pointeur de caractère
*/
void print_rev(char *s)
{
int longueur = 0;
while (s[longueur] != '\0')
{
longueur++;
}
while (longueur > 0)
{
longueur--;
_putchar(s[longueur]);
}
_putchar('\n');
}
