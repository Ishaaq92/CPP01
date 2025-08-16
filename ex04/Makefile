CC = clang++
CFLAGS = -Wall -Wextra
CPPFILES = main.cpp
BINARY = a.out

all:$(BINARY)

$(BINARY): $(CFILES)
	$(CC) $(CFLAGS) $(CPPFILES) -o $(BINARY)

v: 
	$(CC) $(CFLAGS) $(CPPFILES) -o $(BINARY) -g


re: fclean all

clean:
	rm -rf *.o
fclean: clean
	rm -rf $(BINARY) 
