# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 16:33:43 by svanmarc          #+#    #+#              #
#    Updated: 2024/02/10 16:34:35 by svanmarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = SedIsForLosers

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp replace.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re