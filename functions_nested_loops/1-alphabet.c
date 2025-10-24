#include "main.h"
/**
* main - checkcode
*
* Return: Always
*/

void print_alphabet(void)
{
char lettre;
for (lettre = 'a'; lettre <= 'z'; lettre++)
{
write(1,&lettre, 1); 
}
write(1, "\n", 1);
}
