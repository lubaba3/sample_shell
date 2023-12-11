#include "shell.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string.
 */

char *_strdup(const char *str)
{
char *ptr;
int i, len = 0;
if (str == NULL)
{
return (NULL);
}
while (*str != '\0')
{
len++;
str++;
}
str = str - len;
ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
return (NULL);
for (i = 0; i <= len; i++)
ptr[i] = str[i];
return (ptr);
}
/**
 * _strcmp - Compare two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: 0 if the strings are equal, a negative value if s1 < s2,
 *         or a positive value if s1 > s2.
 */

int _strcmp(char *s1, char *s2)
{
int cmp;
cmp = (int)*s1 - (int)*s2;
while (*s1)
{
if (*s1 != *s2)
break;
s1++;
s2++;
cmp = (int)*s1 - (int)*s2;
}
return (cmp);
}
/**
 * _strlen - Calculate the length of a string.
 * @s: The string.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p)
p++;
while (*src)
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
/**
 * _strcopy - Copy a string.
 * @dest: The destination string.
 * @src: The source string.
 * Return: A pointer to the destination string.
 */

char *_strcopy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

