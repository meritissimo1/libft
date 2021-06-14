# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 11:53:58 by user42            #+#    #+#              #
#    Updated: 2021/06/14 12:48:17 by marcrodr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a
RM			=		rm -f
LIB			=		ar -rcs
CC			=		gcc
CFLAGS		=		-Wall -Wextra -Werror
INCLUDE 	=		./libft.h

SRCS		=		ft_atoi.c\
					ft_bzero.c\
					ft_calloc.c\
					ft_isalnum.c\
					ft_isalpha.c\
					ft_isascii.c\
					ft_isdigit.c\
					ft_isprint.c\
					ft_itoa.c\
					ft_memccpy.c\
					ft_memchr.c\
					ft_memcmp.c\
					ft_memcpy.c\
					ft_memmove.c\
					ft_memset.c\
					ft_putchar_fd.c\
					ft_putendl_fd.c\
					ft_putnbr_fd.c\
					ft_putstr_fd.c\
					ft_strchr.c\
					ft_strdup.c\
					ft_strjoin.c\
					ft_strlcat.c\
					ft_strlcpy.c\
					ft_strlen.c\
					ft_strncmp.c\
					ft_strnstr.c\
					ft_strrchr.c\
					ft_tolower.c\
					ft_toupper.c

OBJS	=	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB) $(NAME) $(OBJS)	

clean:		
			$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)

re:			fclean all

norme:	
			norminette ft_*.c

so:
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.c.o:
			@$(CC) $(CFLAGS) -c -I $(INCLUDE) $< -o $(<:.c=.o) 

.PHONY:		all clean fclean re
