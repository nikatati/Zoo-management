#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Air.h"
#include "Eagle.h"
using namespace std;

Eagle::Eagle()
{
	this->Max_Height = 0;
}

Eagle::Eagle(char* name, int age, float Air_Speed, float Max_Height) :Air(name, age, Air_Speed), Animal(name, age)
{
	this->Max_Height = Max_Height;
}

Eagle::Eagle(const Eagle& E) : Air(E), Animal(E)
{
	this->Max_Height = E.Max_Height;
}

void Eagle::print() const
{
	Air::print();
	cout << "The Animal is: Eagle" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Air_Speed << " Kmh." << endl;
	cout << "It's max flight height is: " << Max_Height << " Meters." << endl;
}