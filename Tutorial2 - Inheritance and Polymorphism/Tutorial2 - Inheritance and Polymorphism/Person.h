#pragma once
#include<iostream>
#include<string>

using namespace std;

class Person
{

public:
	Person();
	~Person();
	string getName();
	int getAge();
	void setName(string);
	void setAge(int);
	Person(string, int);
private:
	string name;
	int age;
};

