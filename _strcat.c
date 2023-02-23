#include "main.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: resulting string.
 * @src: source string.
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
char *temp;

temp = dest;

while (*temp != '\0')
{
temp++;
}

while (*src != '\0')
{
*temp = *src;
temp++;
src++;
}
*temp = '\0';
return (dest);
}
