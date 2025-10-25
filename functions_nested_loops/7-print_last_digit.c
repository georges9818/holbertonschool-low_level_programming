#include "main.h"
/**
* print_last_digit - affiche le dernier chiffre d'un nombre
* @n: le nombre dont on veut affichier et le dernier
*
* Return:
*/
int print_last_digit(int n)
{
int last_digit;
last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
write(1, &"0123456789"[last_digit], 1);
return (last_digit);
}
