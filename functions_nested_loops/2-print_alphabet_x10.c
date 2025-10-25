#include "main.h"
/**
* print_alphabet_x10 - affiche 10 fois l'alphabet en minuscule
*
* Return: Always.
*/

void print_alphabet_x10(void)
{
char lettre;
int i;
for (i = 0; i < 10; i++)
{
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
write(1, &lettre, 1);
}
write(1, "\n", 1);
}
}
