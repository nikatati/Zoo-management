#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Whale.h"
#include "Mammal.h"

using namespace std;

Whale::Whale()
{
	fit = 0;
}

Whale::Whale(char* name, int age, float Swim_Speed, char* foodtype, int fit) : Animal(name, age), Water(name, age, Swim_Speed), Mammal(name, age, Swim_Speed, foodtype)
{
	this->fit = fit;
}

Whale::Whale(const Whale& s) :Water(s), Mammal(s), Animal(s)
{
	fit = s.fit;
}

Whale::~Whale()
{
}

void Whale::print() const
{
	Mammal::print();
	cout << "The Animal is: Whale" << endl;
	cout << "The whale fit is: " << fit << "Tall." << endl;
}

