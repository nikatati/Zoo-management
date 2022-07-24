#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Air.h"
#include "Bird.h"
#include "Parrot.h"
using namespace std;

Parrot::Parrot()
{
	Colors = NULL;
}

Parrot::Parrot(char* name, int age, float air_speed, bool migratory, char* Colors) :Animal(name, age), Air(name, age, air_speed),Bird(name,age, air_speed,migratory)
{
	this->Colors = new char[strlen(Colors) + 1];
	if (this->Colors != NULL)
	{
		strcpy(this->Colors, Colors);
	}
}

Parrot::Parrot(const Parrot& Pa) : Bird(Pa), Animal(Pa)
{
	delete[] Colors;
	this->Colors = new char[strlen(Pa.Colors) + 1];
	if (this->Colors != NULL)
	{
		strcpy(this->Colors, Pa.Colors);
	}
}

void Parrot::print() const
{
	Bird::print();
	cout << "The Animal is: Parrot" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Air_Speed << " Kmh." << endl;
	cout << "It's color is: " << Colors << endl;
}