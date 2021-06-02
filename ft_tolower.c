#include "libft.h"


int ft_tolower(int n)
{
    if (n >= 'A' && n <= 'Z')
        n += 32;
    return (n);
}