# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 14:18:36 by ahel-mou          #+#    #+#              #
#    Updated: 2022/05/29 15:05:19 by ahouari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c\
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c\
	  ft_memchr.c ft_memmove.c ft_memset.c ft_memcmp.c\
	  ft_strchr.c ft_strrchr.c ft_strdup.c ft_strlcat.c\
	  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strrchr.c\
	  ft_tolower.c ft_toupper.c ft_strnstr.c ft_substr.c\
	  ft_strjoin.c ft_calloc.c ft_strtrim.c ft_split.c\
	  ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
	  ft_putstr_fd.c ft_itoa.c ft_strmapi.c ft_striteri.c\
	  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	  ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
      ft_lstclear.c ft_lstiter.c\

EXTENDED = td_arr_utils.c char_to_bin.c bin_to_char.c char_index.c ft_strrev.c\
			allocation_utils.c allocation_utils.c sorting.c trees.c\

CC = cc

FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o) $(EXTENDED:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	@$(CC) $(FLAG) -c $<

clean:
	@find . -name "*.o" -delete

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean, fclean, all, re
