#include <iostream>



// class Shape{
// public:
// 	virtual ~Shape() {}
// 	virtual void ShowColor() = 0;
// 	virtual void ShowShape() = 0;
// };

// class Circle : public Shape
// {
// public:
// 	virtual void ShowShape()
// 	{
// 		std::cout << "Circle" << std::endl;
// 	}
// };

// class Square : public Shape{
// public:
// 	virtual void ShowShape()
// 	{
// 		std::cout << "Circle" << std::endl;
// 	}
// };

// class RedCircle : public Circle{
// public:
// 	virtual void ShowColor()
// 	{
// 		std::cout << "Red" << std::endl;
// 	}
// };


// class BlueCircle : public Circle{
// public:
// 	virtual void ShowColor()
// 	{
// 		std::cout << "Blue" << std::endl;
// 	}
// };

// class RedSquare: public Square{
// //....
// };

// class BlueSquare: public Square{
// //....
// };

class IColor{
public:
	virtual ~IColor() {}
	virtual	void ShowColor() = 0;
};

class Red : public IColor{
public:
	virtual void ShowColor()
	{
		std::cout << "Red" << std::endl;
	}
};
//....

class IShape{
public:
	virtual ~IShape() {}
	virtual void ShowShape() = 0;
	IShape(IColor* color) :_color(color)
	{}

protected:
	IColor* _color;
};

class Square :public IShape{
public:
	Square(IColor* color) :IShape(color)
	{}
	virtual void ShowShape() 
	{
		std::cout << "Square" << std::endl;
	}
};

//....