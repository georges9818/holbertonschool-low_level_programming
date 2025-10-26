#include "main.h"
/**
* times_table - affiche la table de 9, en commençant par 0
*
* Return: void
*/
void times_table(void)
{
int i, j, r;
char n1, n2;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
r = i * j;
if (j != 0)
{
write(1, ", ", 2);
if (r < 10)
write(1, " ", 1);
}
if (r >= 10)
{
n1 = (r / 10) + '0';
n2 = (r % 10) + '0';
write(1, &n1, 1);
write(1, &n2, 1);
}
else
{
n1 = r + '0';
write(1, &n1, 1);
}
}
write(1, "\n", 1);
}
}
