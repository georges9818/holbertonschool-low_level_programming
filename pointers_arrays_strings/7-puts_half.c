#include "main.h"
/**
* puts_half - fonction qui affiche la moitié d'une chaîne
* @str: pointeur de caractère
*/
void puts_half(char *str)
{
int longueur = 0;
int debut;
while (str[longueur] != '\0')
{
longueur++;
}
debut = (longueur + 1) / 2;
while (str[debut] != '\0')
{
_putchar(str[debut]);
debut++;
}
_putchar('\n');
}

