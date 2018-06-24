#include "Amo.hpp"
#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"

int		main(void)
{
	Point			pt1(5, 5);
	Point			pt2(13, 20);
	Point			size(1, 1);
	Rectangle		bounds1(pt1, size);
	Rectangle		bounds2(pt2, size);

	Amo		amo1;
	Amo		amo2('=', pt1, bounds1, 100, false);
	Amo		amo3('=', pt2, bounds2, 50, true);
	Amo		amo4(amo2);
	Amo		amo5;

	amo5 = amo3;

	std::cout << amo1 << std::endl;
	std::cout << amo2 << std::endl;
	std::cout << amo3 << std::endl;
	std::cout << "amo4(amo2)" << std::endl;
	std::cout << amo4 << std::endl;
	std::cout << "amo5 = amo3" << std::endl;
	std::cout << amo5 << std::endl;

	return (0);
}
