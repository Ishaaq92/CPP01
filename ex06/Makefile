# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 23:09:32 by ishaaq            #+#    #+#              #
#    Updated: 2025/09/03 13:18:48 by isahmed          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
NAME = harlFilter

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX)  $(CXXFLAGS) $< -c -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
