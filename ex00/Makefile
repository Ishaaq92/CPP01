# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isahmed <isahmed@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 23:08:46 by ishaaq            #+#    #+#              #
#    Updated: 2025/09/03 13:16:27 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
NAME = zombie

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $< -c -o $@

re: fclean all

clean:
	rm -rf $(OBJS) 

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re
