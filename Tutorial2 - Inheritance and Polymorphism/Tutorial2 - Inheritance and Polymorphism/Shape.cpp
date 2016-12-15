#include "stdafx.h"
#include "Shape.h"

Shape::Shape(int a = 0, int b = 0) {
	width = a;
	height = b;
}

int Shape::area() {
	cout << "Parent class area :" << endl;
	return 111;
}

