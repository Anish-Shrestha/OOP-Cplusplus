// Tutorial1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdio>

#include "BMI.h"

using namespace std;

int main()
{
	string name;
	int height;
	double weight;

	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your height (in inches): ";
	cin >> height;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;


	// use of Overload constructor
	BMI Students_2(name, height, weight);
	cout << endl << "Using Overload Constructor";
	cout << endl << "Patient Name: " << Students_2.getName();
	cout << endl << "Patient Height: " << Students_2.getHeight();
	cout << endl << "Patient Weight: " << Students_2.getWeight();
	// member variable is initialized by overload constructor and called calculateBMI fuction to calculate BMI
	cout << endl << "Patient BMI: " << Students_2.calculateBMI();
	cout << endl;



	// Create default object which initialize member variable to null state.
	BMI Students_1;

	Students_1.setName(name);
	Students_1.setHeight(height);
	Students_1.setWeight(weight);
	cout << endl << "Using Default Constructor and Mutator Functions";
	cout << endl << "Patient Name: " << Students_1.getName();
	cout << endl << "Patient Height: " << Students_1.getHeight();
	cout << endl << "Patient Weight: " << Students_1.getWeight();
	cout << endl << "Patient BMI: " << Students_1.calculateBMI();

	cout << endl;

	// press Ctrl + F5 to run project so that console window wont close automatically..
    return 0;
}

