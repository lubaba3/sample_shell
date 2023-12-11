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

