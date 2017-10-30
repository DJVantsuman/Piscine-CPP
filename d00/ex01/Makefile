# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itsuman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 10:56:04 by itsuman           #+#    #+#              #
#    Updated: 2017/10/30 21:28:48 by itsuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	phoneBook
FLAGS = -Wall -Werror -Wextra
SRC = main.cpp Contact.class.cpp PhoneBook.class.cpp
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
