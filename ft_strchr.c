#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return ((char *) str);
        str++;
    }
    return (0)
}