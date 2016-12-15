#include "stdafx.h"
#include "Student.h"


Student::Student(int newStudentId, int newClassNumber, string newName, int newAge):Person(newName,newAge)
{
	studentId = newStudentId;
	classNumber = newClassNumber;
}

Student::Student()
{
}


Student::~Student()
{
}

void Student::setStudentId(int newStudentId)
{
	studentId = newStudentId;
}

void Student::setClassNumber(int newClassNumber)
{
	classNumber = newClassNumber;
}

int Student::getStudentId()
{
	return studentId;
}

int Student::getClassNumber()
{
	return classNumber;
}
