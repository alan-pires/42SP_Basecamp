#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *mat;

    if (min < max)
    {
        i = 0;
        mat = (int*) malloc(sizeof(int) * (max - min));
        while (min < max)
        {
            mat[i] = min;
            i++;
            min++;
        }
            return (i);
    }
    else
    {
        range = NULL;
        return (0);
    }
   
}