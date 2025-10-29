#include "main.h"
/**
* _strlen - retourne la longueur d'une chaîne de caractères
* @s: pointeur vers la chaîne
* Return: longueur de la chaîne
*/
int _strlen(char *s)
{
int longueur = 0;
while (s[longueur] != '\0')
{
longueur++;
}
return (longueur);
}
