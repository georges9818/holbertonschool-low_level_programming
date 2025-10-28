#include "main.h"
/**
* print_most_numbers - affiche les nombres de 0 à 9 sauf 2 et 4
*/
void print_most_numbers(void)
{
int n;
int c;
for (n = 0; n <= 9; n++)
{
if (n != 2 && n != 4)
{
c = n + '0';
write(1, &c, 1);
}
}
write(1, "\n", 1);
}
