#include "stdafx.h"
#include "Person.h"


Person::Person()
{
	age = 0;
}


Person::~Person()
{
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

void Person::setName(string newName)
{
	name = newName;
}

void Person::setAge(int newAge)
{
	age = newAge;
}

Person::Person(string newName, int newAge)
{
	name = newName;
	age = newAge;
}
