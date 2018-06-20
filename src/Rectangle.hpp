#ifndef RECTANGLE_H
# define RECTANGLE_H
# include "Point.hpp"

class Rectangle
{

	private:
		Point	_topLeftCoords;
		Point	_bottomRightCoords;
		Rectangle(void);

	public:
		Rectangle(Point topLeftCoords, Point bottomRightCoords);
		Rectangle(Rectangle const & src);
		~Rectangle(void);
		Rectangle &		operator=(Rectangle const & rhs);
		Point			getTopLeftCoords(void) const;
		Point			getBottomRightCoords(void) const;
		void			setTopLeftCoords(Point topLeftCoords);
		void			setBottomRightCoords(Point bottomRightCoords);

};

#endif
