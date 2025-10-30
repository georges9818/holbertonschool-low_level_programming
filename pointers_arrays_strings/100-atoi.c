#include "main.h"
/**
* _atoi - convertit une chaîne en entier
* @s: pointeur vers la chaîne
* Return: l'entier converti, ou 0 s'il n'y a pas de nombre
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int result = 0;
int started = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
result = result * 10 + (s[i] - '0');
}
else if (started)
break;
i++;
}
return (result *sign);
}





