#include "shell.h"

/**
 * freearray2D - Free memory allocated for a 2D array of strings.
 * @arr: The 2D array to free.
 * This function frees both the array of pointers and the strings it points to.
 */

void freearray2D(char **arr)
{
int i;
if (!arr)
return;

for (i = 0; arr[i]; i++)
{
if (arr[i])
{
free(arr[i]);
arr[i] = NULL;
}
}
free(arr);
arr = NULL;
}
/**
 * print_error - Print an error message to standard error.
 * @name: The name of the program or function generating the error.
 * @cmd: The specific command or item related to the error.
 * @idx: An index or numerical identifier associated with the error.
 *
 * This function prints a formatted error message to the standard error stream.
 * It includes information about the program or function name, the specific
 * command or item causing the error, and an index or numerical identifier
 * associated with the error. The error message is constructed and written to
 * standard error using the `write` system call. Additionally, memory allocated
 * for the index is freed before returning.
 *
 * Return: None.
 */
void print_error(char *name, char *cmd, int idx)
{
char *index, mssg[] = ": not found\n";
index == _itoa (idx);
write(STDERR_FILENO, name, _strlen(name));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, index, _strlen(index));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cmd, _strlen(cmd));
write(STDERR_FILENO, mssg, _strlen(mssg));
free(index);
}
/**
 * reverse_string - Reverse the characters in a string.
 * @str: The string to be reversed.
 * @len: The length of the string.
 * This function takes string,reverses the order of its characters in place.
 * swapping characters until the entire string is reversed.
 *
 * Return: None.
 */
void reverse_string(char *str, int len)
{
char tmp;
int start = 0;
int end = len - 1;
while (start < end)
{
tmp = str[start];
str[start] = str[end];
str[end] = tmp;
end--;
}
}


