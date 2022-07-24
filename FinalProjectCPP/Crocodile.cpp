#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Land.h"
#include "Crocodile.h"
using namespace std;

Crocodile::Crocodile()
{
	weight = 0.0;
}

Crocodile::Crocodile(char* name, int age, float Swim_Speed, float Land_Speed, float weight) :Animal(name, age), Water(name, age, Swim_Speed), Land(name, age, Land_Speed)
{
	this->weight = weight;
}

Crocodile::Crocodile(const Crocodile& C) : Animal(C), Water(C), Land(C)
{
	this->weight = C.weight;
}

void Crocodile::print() const
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "    Land/Water animal    " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
	cout << "The Animal is: Crocodile" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed in land is: " << Land_Speed << " Kmh." << endl;
	cout << "It's speed in water is: " << Swim_Speed << " Kmh." << endl;
	cout << "It's weight is: " << weight << " Kg." << endl;

}

