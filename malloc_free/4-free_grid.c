#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 * @grid: the 2D grid to free
 * @height: height of the grid (number of rows)
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
    int h;

    /* التأكد من أن المصفوفة ليست فارغة أصلاً لتجنب الانهيار */
    if (grid == NULL || height <= 0)
        return;

    /* 1. المرور على كل صف (طابق) وحذف الغرف الداخلية الخاصة به أولاً */
    for (h = 0; h < height; h++)
    {
        free(grid[h]);
    }

    /* 2. أخيرًا، حذف الهيكل الرئيسي (مؤشرات الصفوف نفسها) */
    free(grid);
}
