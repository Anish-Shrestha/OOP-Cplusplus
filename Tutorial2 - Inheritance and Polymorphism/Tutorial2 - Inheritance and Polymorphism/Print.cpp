#include "stdafx.h"
#include "Print.h"


Print::Print()
{
	cout <<endl << "Default Constructor" << endl;
}



void Print::PringData(int data)
{
	cout << "PrintData with int: " << data << endl;
}



void Print::PrintData(double data)
{
	cout << "PrintData with double: " << data <<endl;
}



Print::~Print()
{
}
