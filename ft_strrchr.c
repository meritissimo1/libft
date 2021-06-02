#include "libft.h"

char *strrchr(const char *str, int c)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(str);
    while (*str)
        str++;
    str--;
    while (i < len)
    {
        if (c == *str)
            return ((char *)str);
        i++;
        str--;
    }
}
