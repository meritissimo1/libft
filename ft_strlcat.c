#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t len;

    i = 0;
    if (dstsize <= ft_strlen(dst))
        return (dstsize + ft_strlen(src));
    len = ft_strlen(dst);
    while (src[i] != '\0' && i + 1 < dstsize)
    {
        dst[len] += src[i];
        i++;
        len++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst) + ft_strlen(&dst[len]));
}

int main()
{
    int x;
    char test[] = "olar";
    char ola[] = "test";

   x =  ft_strlcat(test, ola, 10);
   printf("%d\n", x);
   printf("%s\n", test);

}