CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
NAME = a.out

OBJS = $(patsubst %.cpp, %.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $< -c -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) 
