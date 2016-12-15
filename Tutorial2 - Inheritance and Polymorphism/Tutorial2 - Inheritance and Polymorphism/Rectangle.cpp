#include "stdafx.h"
#include "Rectangle.h"


Rectangle::Rectangle(int a = 0, int b = 0) :Shape(a, b) { }


int Rectangle::area() {
	
	cout << "Rectangle class area :" << endl;
	return (width * height);
}
