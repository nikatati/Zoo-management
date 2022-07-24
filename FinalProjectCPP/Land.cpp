#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Land.h"
#include "Animal.h"
using namespace std;

Land::Land()
{
	Land_Speed = 0;
}

Land::Land(char* name, int age, float Land_Speed) :Animal(name, age)
{
	this->Land_Speed = Land_Speed;
}

Land::Land(const Land& L) : Animal(L)
{
	this->Land_Speed = L.Land_Speed;
}

void Land::print() const
{
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "    Land animal    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;
}

