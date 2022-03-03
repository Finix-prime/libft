# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmethira <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 16:04:45 by pmethira          #+#    #+#              #
#    Updated: 2022/03/02 12:47:41 by pmethira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRCS = $(shell find . -name 'ft*.c')
OBJS = $(SRCS:%.c=%.o)
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	    ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJS_BONUS)
	ar -rs $(NAME) $(OBJS_BONUS)


.PHONY: clean fclean all re
