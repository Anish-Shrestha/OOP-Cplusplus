#pragma once
#include<iostream>
#include<string>

using namespace std;

class Shape {
protected:
	int width, height;

public:
	Shape(int, int);
	// if virtual not define then can not be override by child class(rectangel) area() method.
	virtual int area();
};
