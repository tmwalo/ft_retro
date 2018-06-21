#include "Rectangle.hpp"
#include <iostream>

int		main(void)
{
	Point		point1(13, 77);
	Point		point2(22, 56);
	Point		point3(0, 0);
	Point		point4(88, 99);
	Rectangle	rect2(point1, point2);
	Rectangle	rect3(rect2);
	Rectangle	rect4(point3, point3);

	std::cout << "rect2 state: topLeftCoords - " << rect2.getTopLeftCoords() << ", bottomRightCoords - " << rect2.getBottomRightCoords() << std::endl;
	std::cout << "rect3 state: topLeftCoords - " << rect3.getTopLeftCoords() << ", bottomRightCoords - " << rect3.getBottomRightCoords() << std::endl;

	rect4 = rect2;

	std::cout << "rect4 state: topLeftCoords - " << rect4.getTopLeftCoords() << ", bottomRightCoords - " << rect4.getBottomRightCoords() << std::endl;

	rect2.setTopLeftCoords(point3);
	rect2.setBottomRightCoords(point4);

	std::cout << "rect2 state: topLeftCoords - " << rect2.getTopLeftCoords() << ", bottomRightCoords - " << rect2.getBottomRightCoords() << std::endl;

	return (0);
}
