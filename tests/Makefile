CC = clang++

FLAGS = -Wall -Wextra -Werror

PT = Point.cpp

RECT = Rectangle.cpp

GE = GameEntity.cpp

point: point_test.cpp $(PT)
	$(CC) -o point point_test.cpp $(PT) $(FLAGS)

rectangle: rectangle_test.cpp $(RECT) $(PT)
	$(CC) -o rectangle rectangle_test.cpp $(RECT) $(PT) $(FLAGS)

game_entity: game_entity_test.cpp $(GE)
	$(CC) -o game_entity game_entity_test.cpp $(GE) $(FLAGS)

fclean:
	@echo "rm exes"
	@/bin/rm point rectangle game_entity
