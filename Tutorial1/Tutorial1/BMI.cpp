#include "stdafx.h"
#include "BMI.h"

// function definitions 
// :: -> scope resolution
BMI::BMI() // access function of class BMI
{
	// in c++ do not need to initialize string. 
	newHeight = 0;
	newWeight = 0.0;
}

// Overload Constructor
BMI::BMI(string name, int height, double weight)
{
	newName = name;
	newHeight = height;
	newWeight = weight;
}

string BMI::getName() const
{
	return newName;
}

int BMI::getHeight() const
{
	return newHeight;
}

double BMI::getWeight() const
{
	return newWeight;
}

void BMI::setName(string name)
{
	newName = name;
}

void BMI::setHeight(int height)
{
	newHeight = height;
}

void BMI::setWeight(double weight)
{
	newWeight = weight;
}

double BMI::calculateBMI()
{
	return ((newWeight * 703)/(newHeight*newHeight));
}


BMI::~BMI()
{

}
