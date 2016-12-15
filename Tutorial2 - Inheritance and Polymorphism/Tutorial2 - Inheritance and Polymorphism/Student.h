#pragma once
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;
// student class inherits from person class.
class Student : public Person
{
public:
	//when object of student is created its constructor is called also the base class constructor is called.
	Student(int, int, string, int);
	Student();
	~Student();
	void setStudentId(int);
	void setClassNumber(int);
	int getStudentId();
	int getClassNumber();
private:
	int studentId;
	int classNumber;
};

