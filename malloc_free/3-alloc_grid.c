#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the grid (columns)
 * @height: the height of the grid (rows)
 *
 * Return: pointer to the 2D array, or NULL on failure
 *         If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int h, w;

    /* 1. التحقق من الحدود المنطقية للمصفوفة */
    if (width <= 0 || height <= 0)
        return (NULL);

    /* 2. حجز الذاكرة للصفوف (الطوابق الأساسية) */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* 3. حجز الذاكرة للأعمدة لكل صف على حدة */
    for (h = 0; h < height; h++)
    {
        grid[h] = malloc(sizeof(int) * width);
        if (grid[h] == NULL)
        {
            /* هندسة الحماية (Error Handling): لو فشل حجز صف، نظف ما تم حجزه مسبقاً */
            while (h >= 0)
            {
                free(grid[h]);
                h--;
            }
            free(grid);
            return (NULL);
        }

        /* 4. تعبئة كل خانة بالقيمة الافتراضية 0 */
        for (w = 0; w < width; w++)
        {
            grid[h][w] = 0;
        }
    }

    /* 5. إرجاع المؤشر المزدوج للمصفوفة بنجاح */
    return (grid);
}

