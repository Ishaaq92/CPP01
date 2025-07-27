# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 23:08:46 by ishaaq            #+#    #+#              #
#    Updated: 2025/07/27 11:21:01 by ishaaq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=g++
CPPFLAGS=-std=c++98 -Wall -Wextra -Werror
CPPFILES=main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
BINARY=fight

all: $(BINARY)

$(BINARY): $(CPPFILES)
	$(CC) $(CPPFLAGS) $(CPPFILES) -o $(BINARY)

re: fclean all

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(BINARY)