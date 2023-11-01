#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - A function that frees 2d array
 * @grid: grid
 * @height: height of grid
 * Description: frees memory
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
