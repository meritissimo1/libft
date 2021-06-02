#include "libft.h"

char    *ft_strnstr (const char	*big, const char *little, size_t len)
{
    int l;
    int b;

    b = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (*big)
    {
        l = 0;
        while (big[b + l] == little[l] && (b + l) < len)
        {
            if (big[b + l] == '\0' && *little[l] == '\0')
                return ((char *)&big[b]);
            l++;
        }
        if (little[l] == '\0')
            return ((char *) big + b);
        b++;
    }
    return (0);
}