CC = clang++

FLAGS = -Wall -Wextra -Werror

PT = Point.cpp

RECT = Rectangle.cpp

point: point_test.cpp $(PT)
	$(CC) -o point point_test.cpp $(PT) $(FLAGS)

rectangle: rectangle_test.cpp $(RECT) $(PT)
	$(CC) -o rectangle rectangle_test.cpp $(RECT) $(PT) $(FLAGS)

fclean:
	@echo "rm exes"
	@/bin/rm point rectangle
