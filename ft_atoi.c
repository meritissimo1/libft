#include "libft.h"


int     ft_atoi(const char *str)
{
    int i;
    int x;
    int s;

    i = 0;
    s = 1;
    x = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
            i++;        
        if (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
                s = -1;
            else
                s = 1;
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9')
        {
            x = (x * 10) + (str[i] - '0');
            i++;
        }
    }
    return (x * s);
}