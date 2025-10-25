#include "main.h"
/**
* print_sign - affiche le signe d'un nombre
* @n: le nombre dont on veut afficher le signe
*
* Return: 1 n positif nul negatif
*/
int print_sign(int n)
{
if (n > 0)
{
write(1, "+", 1);
return (1);
}
else if (n == 0)
{
write(1, "0", 1);
return (0);
}
else
{
write(1, "-", 1);
return (-1);
}
}





