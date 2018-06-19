class Point
{

	private:
		unsigned int	_y;
		unsigned int	_x;

	public:
		Point(void);
		Point(unsigned int y, unsigned int x);
		Point(Point const & src);
		~Point(void);
		Point &			operator=(Point const & rhs);
		unsigned int	getY(void) const;
		unsigned int	getX(void) const;
		void			setY(unsigned int val);
		void			setX(unsigned int val);

};