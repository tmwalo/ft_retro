#include "Point.hpp"

class Rectangle
{

	private:
		Point	_topLeftCoords;
		Point	_bottomRightCoords;

	public:
		Rectangle(void);
		Rectangle(Point topLeftCoords, Point topRightCoords);
		Rectangle(Rectangle const & src);
		~Rectangle(void);
		Rectangle &		operator=(Rectangle const & rhs);
		Point			getTopLeftCoords(void) const;
		Point			getBottomRightCoords(void) const;
		void			setTopLeftCoords(Point topLeftCoords);
		void			setBottomRightCoords(Point bottomRightCoords);

};
