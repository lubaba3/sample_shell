#include "shell.h"
/**
 * is_positive_number :Checks if a string represents a positive number.
 *
 * @param str: The string to be checked.
 *
 * @return 1 if the string is a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
int i;
if (!str)
return (0);
for (i = 0; str[i]; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}
return(1);
}
/**
 * _itoa :Converts a string representing a number to an integer.
 *
 * @param str: The string to be converted.
 *
 * @return The integer value represented by the string.
 */
int _itoa(char *str)
{
int i, num = 0;
for (i = 0; str[i]; i++)
{
num *= 10;
num += (str[i] - '0');
}
return (num);
}
