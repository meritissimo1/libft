#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int     ft_atoi(const char *str);
int     ft_isalnum(int n);
int     ft_isalpha(int n);
int     ft_isascii(int n);
int     ft_isdigit (int arg);
int     ft_isprint(int n);
int     ft_tolower(int n);
int     ft_toupper(int n);
int     ft_memcmp(const void *str1, const void *str2, size_t n);
int     ft_strncmp(const char *str1, const char *str2, size_t n);

void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset (void *s, int c, size_t n);
void    ft_bzero(void *s, size_t n);


size_t    ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t    ft_strlen(const char *str);

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char    *strrchr(const char *str, int c);
char    *ft_strchr(const char *str, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);

char    *ft_strdup(const char *s1);
void    *ft_calloc(size_t nitems, size_t size);

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char    *ft_strjoin(char const *s1, char const *s2);


#endif