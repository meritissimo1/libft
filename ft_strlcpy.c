#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    if (!dst || !src)
		return (0);
    size_t i;
    int len;

    i = 0;
    len = 0;
    len = ft_strlen(src);
    while (src[i] != '\0' || i < dstsize)
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return (len);
}

int main()
{
    int x;
    char test[] = "olar";
    char ola[] = "test";

   x =  ft_strlcpy(test, ola, 2);
   printf("%d\n", x);
}