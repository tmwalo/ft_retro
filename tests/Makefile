CC = clang++

FLAGS = -Wall -Wextra -Werror

PT = Point.cpp

RECT = Rectangle.cpp

GE = GameEntity.cpp

GEE = GameEntityEnv.cpp

GEF = GameEntityField.cpp

AMO = Amo.cpp

point: point_test.cpp $(PT)
	$(CC) -o point point_test.cpp $(PT) $(FLAGS)

rectangle: rectangle_test.cpp $(RECT) $(PT)
	$(CC) -o rectangle rectangle_test.cpp $(RECT) $(PT) $(FLAGS)

game_entity: game_entity_test.cpp $(GE) $(PT) $(AMO) $(RECT)
	$(CC) -o game_entity game_entity_test.cpp $(GE) $(PT) $(AMO) $(RECT) $(FLAGS)

game_entity_env: game_entity_env_test.cpp $(GEE) $(GE) $(PT)
	$(CC) -o game_entity_env game_entity_env_test.cpp $(GEE) $(GE) $(PT) $(FLAGS)

game_entity_field: game_entity_field_test.cpp $(GEF)
	$(CC) -o game_entity_field game_entity_field_test.cpp $(GEF) $(PT) $(RECT) $(GE) $(GEE) $(FLAGS)

amo: amo_test.cpp $(AMO) $(RECT) $(PT)
	$(CC) -o amo amo_test.cpp $(AMO) $(RECT) $(PT) $(FLAGS)

fclean:
	@echo "rm exes"
	@/bin/rm point rectangle game_entity game_entity_env game_entity_field amo
