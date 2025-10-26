#include "main.h"
/**
* jack_bauer - affiche chaque minute de la journée
* @n: le nombre dont affichier chaque minute
*
* Return: void 
*/
void jack_bauer(void)
{
int h, m;
char time [6];
for (h = 0; h < 24; h++)
{
for (m = 0; m < 60; m++)
{
time[0] = (h / 10) + '0';
time[1] = (h % 10) + '0';
time[2] = ':';
time[3] = (m / 10) + '0';
time[4] = (m % 10) + '0';
time[5] = '\n';
write(1, time, 6);
}
}
}
