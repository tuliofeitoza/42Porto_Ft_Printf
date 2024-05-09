# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsilva-f <tsilva-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/09 20:48:47 by tsilva-f          #+#    #+#              #
#    Updated: 2024/05/09 21:12:38 by tsilva-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

FUNC = 

CFLAGS = -Wall -Wextra -Werror -g 

RM = rm -rf

OBJS = $(FUNC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all