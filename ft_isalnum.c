int ft_isalnum(int n)
{
    if ((n >= 'A' && n <= 'Z') || (n >= 'a' && n <= 'z') ||
     (n > '0' && '9'))
        return (1);
    return (0); 
}