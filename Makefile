CC = clang++

NAME = ft_retro

FLAGS = -Wall -Wextra -Werror

LIB = -lncurses

SRC = src/main.cpp src/Game.cpp src/GameEntity.cpp src/Point.cpp src/GameEntityEnv.cpp src/Rectangle.cpp \
		src/GameEntityField.cpp src/Amo.cpp

OBJ = bin/main.o bin/Game.o bin/GameEntity.o bin/Point.o bin/GameEntityEnv.o bin/Rectangle.o \
		bin/GameEntityField.o bin/Amo.o

all: $(NAME)

$(NAME): bin/obj
	$(CC) -o $(NAME) $(OBJ) $(FLAGS) $(LIB)

bin/obj:
	mkdir -p bin
	$(CC) -c $(SRC) $(FLAGS)
	mv *.o bin/

clean:
	/bin/rm -rf bin/

fclean: clean
	/bin/rm $(NAME)

re: fclean all
