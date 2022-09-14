# Libft

## About the project 💡 

 Building my own basic C static library, which will be used throughout the rest of the program (42 Cursus). The ```ft_*``` functions mostly mimic the behaviour of the traditional C functions, and must be written using at most ```write()``` and ```malloc()```.
 
* [**Part 1**](#part-1---libc-functions) - re-code a set of the **libc** functions, as defined in their **man**
* [**Part 2**](#part-2---additional-functions) - code functions not included in the **libc**
 
 ### Part 1 - Libc functions
| Function | Description |
| --- | --- |
| [**ft_isalpha**](https://github.com/meritissimo1/libft/blob/master/ft_isalpha.c) | Checks whether a character is an alphabet or not. |
| [**ft_isdigit**](https://github.com/meritissimo1/libft/blob/master/ft_isdigit.c) | Check if the passed character is a digit or not (0 through 9). |
| [**ft_isalnum**](https://github.com/meritissimo1/libft/blob/master/ft_isalnum.c) | Checks for an alphanumeric character; it is equivalent to (isalpha(c) \|\| isdigit(c)). |
| [**ft_isascii**](https://github.com/meritissimo1/libft/blob/master/ft_isascii.c) | Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set. |
| [**ft_isprint**](https://github.com/meritissimo1/libft/blob/master/ft_isprint.c) | Checks for any printable character including space. |
| [**ft_strlen**](https://github.com/meritissimo1/libft/blob/master/ft_strlen.c) | Calculates the length of the string pointed to by s, excluding the terminating null byte. |
| [**ft_memset**](https://github.com/meritissimo1/libft/blob/master/ft_memset.c) | Fills the first n bytes of the memory area pointed to by s with the constant byte c. |
| [**ft_bzero**](https://github.com/meritissimo1/libft/blob/master/ft_bzero.c) | Set n bytes of *s to 0. |
| [**ft_memcpy**](https://github.com/meritissimo1/libft/blob/master/ft_memcpy.c) | Copies n bytes from memory area src to memory area dst. The memory areas must not overlap. Use ft_memmove if the memory areas do overlap. |
| [**ft_memmove**](https://github.com/meritissimo1/libft/blob/master/ft_memmove.c) | Copies n bytes from memory area src to memory area dest. The memory area may overlap. The copy is always done in a non-destructive manner. |
| [**ft_strlcpy**](https://github.com/meritissimo1/libft/blob/master/ft_strlcpy.c) | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result. |
| [**ft_strlcat**](https://github.com/meritissimo1/libft/blob/master/ft_strlcat.c) | Appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. |
| [**ft_toupper**](https://github.com/meritissimo1/libft/blob/master/ft_toupper.c) | Convert a lowercase letter to uppercase. |
| [**ft_tolower**](https://github.com/meritissimo1/libft/blob/master/ft_tolower.c) | Convert a uppercase letter to lowercase. |
| [**ft_strchr**](https://github.com/meritissimo1/libft/blob/master/ft_strchr.c) | Locate character in string and returns a pointer to the first occurrence. |
| [**ft_strrchr**](https://github.com/meritissimo1/libft/blob/master/ft_strrchr.c) | Locate character in string and returns a pointer to the last occurrence. |
| [**ft_strncmp**](https://github.com/meritissimo1/libft/blob/master/ft_strncmp.c) | Compares the two strings s1 and s2, only the first (at most) n bytes of them. |
| [**ft_memchr**](https://github.com/meritissimo1/libft/blob/master/ft_memchr.c) | Scans the initial n bytes of the memory area pointed by s for the first instance of c. |
| [**ft_memcmp**](https://github.com/meritissimo1/libft/blob/master/ft_memcmp.c) | Compares the first n bytes of the memory areas s1 and s2. |
| [**ft_strnstr**](https://github.com/meritissimo1/libft/blob/master/ft_strnstr.c) | Locate the first occurrence of the null-terminated substring in the bigstring, where not more than len characters are searched. |
| [**ft_atoi**](https://github.com/meritissimo1/libft/blob/master/ft_atoi.c) | Converts the initial portion of the string pointed to by str to int. |
| [**ft_calloc**](https://github.com/meritissimo1/libft/blob/master/ft_calloc.c) | Allocate and free dynamic memory, setting the memory to zero. |
| [**ft_strdup**](https://github.com/meritissimo1/libft/blob/master/ft_strdup.c) | Allocated and returns a duplication of the str. |

### Part 2 - Additional functions

| Function | Description |
| --- | --- |
| [**ft_substr**](https://github.com/meritissimo1/libft/blob/master/ft_substr.c) |  Allocates and returns a substring from the string s. |
| [**ft_strjoin**](https://github.com/meritissimo1/libft/blob/master/ft_strjoin.c) | Allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'. |
| [**ft_strtrim**](https://github.com/meritissimo1/libft/blob/master/ft_strtrim.c) | Allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string. |
| [**ft_split**](https://github.com/meritissimo1/libft/blob/master/ft_split.c) | Allocates and returns an array of strings obtwained by splitting 's' using the character 'c' as a delimiter. |
| [**ft_itoa**](https://github.com/meritissimo1/libft/blob/master/ft_itoa.c) | Allocates and returns a string representing the integer received as an argument. |
| [**ft_strmapi**](https://github.com/meritissimo1/libft/blob/master/ft_strmapi.c) | Applies the function 'f' to each character of the string 's' to create a new string resulting from successive applications of 'f'. |
| [**ft_putchar_fd**](https://github.com/meritissimo1/libft/blob/master/ft_putchar_fd.c) | Outputs the character 'c' to the given file descriptor. |
| [**ft_putstr_fd**](https://github.com/meritissimo1/libft/blob/master/ft_putstr_fd.c) | Outputs the string 's' to the given file descriptor. |
| [**ft_putendl_fd**](https://github.com/meritissimo1/libft/blob/master/ft_putendl_fd.c) | Outputs the string 's' to the given file descriptor, followed by a newline. |
| [**ft_putnbr_fd**](https://github.com/meritissimo1/libft/blob/master/ft_putnbr_fd.c) | Outputs the integer 'n' to the given file descriptor. |
