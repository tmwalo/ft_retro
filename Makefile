CC = clang++

NAME = ft_retro

FLAGS = -Wall -Wextra -Werror

LIB = -lncurses

SRC = src/main.cpp src/Game.cpp

OBJ = bin/main.o bin/Game.o

bin/$(NAME): bin/obj
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(LIB)

bin/obj:
	mkdir -p bin
	$(CC) -c $(SRC) $(FLAGS)
	mv *.o bin/
