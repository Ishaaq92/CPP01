# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/26 23:08:46 by ishaaq            #+#    #+#              #
#    Updated: 2025/08/28 14:37:49 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Zombie.cpp zombieHorde.cpp
NAME = zombieHorde

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re

