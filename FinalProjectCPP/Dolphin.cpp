#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Dolphin.h"
#include "Mammal.h"

using namespace std;

Dolphin::Dolphin()
{
	this->Jump_Height = 0;
}

Dolphin::Dolphin(char* name, int age, float Swim_Speed, char* foodtype, float jump_height) :Water(name, age, Swim_Speed), Animal(name, age), Mammal(name, age, Swim_Speed, foodtype)
{
	this->Jump_Height = jump_height;
}

Dolphin::Dolphin(const Dolphin& d) : Water(d), Animal(d)
{
	this->Jump_Height = d.Jump_Height;
}

Dolphin::~Dolphin()
{
}

void Dolphin::print() const
{
	Water::print();
	Mammal::print();
	cout << "The Animal is: Dolphin" << endl;
	cout << "The Dolphin jump height is: " << Jump_Height << "Meters." << endl;
}
