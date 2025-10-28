#include "main.h"
/**
* print_numbers - affiche les nombres de 0 à 9 suivis d'un saut de ligne
*/
void print_numbers(void)
{
int n;
char c;
for (n = 0; n <= 9; n++)
{
c = n + '0';
write(1, &c, 1);
}
write(1, "\n", 1);
}



