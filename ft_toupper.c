int ft_toupper(int n)
{
    if (n >= 'a' && n <= 'z')
        n -= 32;
    return (n);
}