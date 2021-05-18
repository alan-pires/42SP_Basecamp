#include <stddef.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *array;
    int range;
    int i;

    if(min < max)
    {
        i = 0;
        range = max - min;
        array = malloc(sizeof(int) * range);
        while (i < range)
        {
            array[i] = min;
            i++;
            min++;
        }
        return (array);
    }
    else
        return (0);   
}
