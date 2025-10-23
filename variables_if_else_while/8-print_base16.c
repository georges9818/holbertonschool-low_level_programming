#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
char c;
int n;
for (c = 'a'; c <= 'f'; c++)
putchar(c);
for (n = 0; n < 10; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
