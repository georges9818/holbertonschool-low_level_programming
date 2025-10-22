#include <stdio.h>
/**
* main - Entry point
* Description: This program assigns a random number to the variable n
* each time it is executed and printf zero negative positive
* Return: (0)
*/
int main(void)
{
int n = 5;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
