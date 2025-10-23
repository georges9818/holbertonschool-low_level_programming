#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
char c;
char C;
for (c = 'a' ; c <= 'z'; c++)
for (C = 'A' ; C <= 'Z'; c++)
putchar(c);
putchar(C);
putchar('\n');
return (0);
}
