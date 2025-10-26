#include "main.h"
void print_number(int n);
/**
* print_to_98 - Affiche tous les nombres naturels de n à 98
* @n: Nombre de départ
*/
void print_to_98(int n)
{
int step = (n <= 98) ? 1 : -1;
while (n != 98)
{
print_number(n);
write(1, ", ", 2);
n += step;
}
print_number(98);
write(1, "\n", 1);
}
/**
* print_number - Affiche un entier avec write
* @n: Nombre à afficher
*/
void print_number(int n)
{
char buffer[12];
int i = 0, j;
unsigned int num;
if (n < 0)
{
write(1, "-", 1);
num = -n;
}
else
num = n;
if (num == 0)
{
write(1, "0", 1);
return;
}
while (num > 0)
{
buffer[i++] = (num % 10) + '0';
num /= 10;
}
for (j = i - 1; j >= 0; j--)
write(1, &buffer[j], 1);
}
