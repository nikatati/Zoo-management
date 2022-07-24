#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"

using namespace std;

Water::Water()
{
	this->Swim_Speed = 0;
}

Water::Water(char* name, int age, float Swim_Speed) :Animal(name, age)
{
	this->Swim_Speed = Swim_Speed;
}

Water::Water(const Water& w) : Animal(w)
{
	this->Swim_Speed = w.Swim_Speed;
}

Water::~Water()
{
}

void Water::print() const
{
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "    Water animal    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~" << endl << endl;

	cout << "Swim speed: " << Swim_Speed << endl;
}

