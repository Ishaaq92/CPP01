# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 23:09:32 by ishaaq            #+#    #+#              #
#    Updated: 2025/08/17 10:41:01 by ishaaq           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS= -Wall -Wextra -Werror
CPPFILES= main.cpp Harl.cpp
BINARY=harlFilter

all: $(BINARY)

$(BINARY): $(CPPFILES)
	$(CC) $(CFLAGS) $(CPPFILES) -o $(BINARY)
v: 
	$(CC) -g $(CFLAGS) $(CPPFILES) -o $(BINARY)

re: fclean all

clean:
	rm -rf *.o
fclean: clean
	rm -rf $(BINARY)
