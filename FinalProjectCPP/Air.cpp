#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Air.h"

using namespace std;

Air::Air()
{
	this->Air_Speed = 0;
}

Air::Air(char* name, int age, float Air_Speed) :Animal(name, age)
{
	this->Air_Speed = Air_Speed;
}

Air::Air(const Air& A) : Animal(A)
{
	this->Air_Speed = A.Air_Speed;
}

Air::~Air()
{
}

void Air::print() const
{
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "    Air animal    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}
