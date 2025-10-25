#include "main.h"
/**
* _islower - vérifie si un caractère est en minuscule
* @c: caractère à tester
*
* Return: Always
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
