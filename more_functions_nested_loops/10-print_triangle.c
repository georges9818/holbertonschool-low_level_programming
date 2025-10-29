#include "main.h"
/**
* print_triangle - affiche un triangle de taille 'size'
* @size: taille du triangle
*
* Si size <= 0, affiche seulement un retour à la ligne
*/
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
_putchar(' ');
for (k = 0; k < i; k++)
_putchar('#');
_putchar('\n');
}
}
