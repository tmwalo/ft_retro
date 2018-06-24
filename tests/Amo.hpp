
#ifndef AMO_H
# define AMO_H
# include "Point.hpp"
# include "Rectangle.hpp"
# include <iostream>

class Amo
{

	private:
		char			_displayChar;
		Point			_pos;
		Rectangle		_bounds;
		unsigned int	_attckDmg;
		bool			_isFired;

	public:
		Amo(void);
		Amo(char displayChar, Point pos, Rectangle bounds, unsigned int attckDmg, bool isFired);
		Amo(Amo const & src);
		virtual ~Amo(void);
		Amo &			operator=(Amo const & rhs);
		char			getDisplayChar(void) const;
		Point			getPos(void) const;
		Rectangle		getBounds(void) const;
		unsigned int	getAttckDmg(void) const;
		bool			getIsFired(void) const;
		void			setDisplayChar(char val);
		void			setPos(Point val);
		void			setBounds(Rectangle val);
		void			setAttckDmg(unsigned int val);
		void			setIsFired(bool val);

};

std::ostream &				operator<<(std::ostream & out, Amo & rhs);

#endif
