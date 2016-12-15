// Tutorial2 - Inheritance and Polymorphism.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include "Print.h"
#include "Rectangle.h"
int main()
{
	// INHERITANCE - PERSON AND STUDENT CLASS
	// student inherits from person, allowing student to access member variable of person(name, age)
	Student anish(3, 4, "Anish Shrestha", 20);
	cout << endl << "Student Name: " << anish.getName();
	cout << endl << "Student Age: " << anish.getAge();
	cout << endl << "Student Class: " << anish.getClassNumber();
	cout << endl << "Student Id: " << anish.getStudentId();
	cout << endl;

	// POLYMORPHISM

	// OVERLOADING - PRINT CLASS
	Print printObject;
	printObject.PringData(1);
	printObject.PrintData(4.5); // for double value different PrintData method called.



    // OVERRIDING - SHAPE AND RECTANGEL CLASS (SHAPE BASE CLASS AND RECTANGLE CHILD CLASS)
	Shape *shape;
	Rectangle recObject(10, 7);
	// store the address of Rectangle
	shape = &recObject;
	// call rectangle area.
	shape->area();

	cout << shape->area() << endl;
	

	return 0;
}

