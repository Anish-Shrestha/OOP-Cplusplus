#pragma once
// Header ==> function declarations

#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H

#define BMI_H
class BMI
{

public:
	//Default Constructor
	BMI(); // It will be called when object is created.
	
	// Overload Constructor
	BMI(string, int, double);

	// Accessor Functions
	string getName() const; //The keyword const is good practise, we keep it when our function not modify any member variable
		// getName - returns name of patient
	int getHeight() const;
		// getHeight - returns height of patient
	double getWeight() const;
		// getWeight - returns weight of patient


	// Mutator Functions
	void setName(string);
		// setName - sets name of patient
		// @param string - name of patient
	
	void setHeight(int);
		// setHeight - set height for patient
		// @param int - height of patient

	void setWeight(double);
		// setWeight - set weight for patient
		// @param double -set weight for patient

	double calculateBMI();
		// calculateBMI - calculate BMI of patient
		// @return double - BMI of patient


	// Destructor
	~BMI();

// data encapsulation, not avaliable outside class
private:
	// Member variables
	string newName;
	int newHeight;
	double newWeight;
};
#endif // !BMI_H



