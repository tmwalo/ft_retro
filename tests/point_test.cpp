#include "Point.hpp"
#include <iostream>

int		main(void)
{
	Point	point1;
	Point	point2(13, 77);
	Point	point3(point2);
	Point	point4;

	std::cout << "point1 state: Y - " << point1.getY() << ", X - " << point1.getX() << std::endl;
	std::cout << "point2 state: Y - " << point2.getY() << ", X - " << point2.getX() << std::endl;
	std::cout << "point3 state: Y - " << point3.getY() << ", X - " << point3.getX() << std::endl;

	point4 = point2;

	std::cout << "point4 state: Y - " << point4.getY() << ", X - " << point4.getX() << std::endl;

	point1.setY(22);
	point1.setX(78);
	point2.setY(31);
	point2.setX(90);

	std::cout << "point1 state: Y - " << point1.getY() << ", X - " << point1.getX() << std::endl;
	std::cout << "point2 state: Y - " << point2.getY() << ", X - " << point2.getX() << std::endl;

	return (0);
}
