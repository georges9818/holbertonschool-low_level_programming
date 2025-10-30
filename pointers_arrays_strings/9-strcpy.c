#include "main.h"
/**
* _strcpy - copie la chaîne pointée par src vers dest
* @dest: destination (pointeur de caractère)
* @src: source (pointeur de caractère)
* Return: pointeur vers dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
