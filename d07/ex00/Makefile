# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itsuman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 10:56:04 by itsuman           #+#    #+#              #
#    Updated: 2017/11/02 15:35:21 by itsuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ex00.out
FLAGS = -Wall -Werror -Wextra
SRC = whatever.cpp
CC = clang++
OSRC =	$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OSRC)
	clang++ -o $(NAME) $(FLAGS) $(OSRC)

%.o: %.cpp
	clang++ $(FLAGS) -c -o $@ $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
