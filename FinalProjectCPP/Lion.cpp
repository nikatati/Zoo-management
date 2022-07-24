#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Lion.h"
#include "Animal.h"
#include "Lion.h"
using namespace std;

Lion::Lion()
{
	weight = 0;
}

Lion::Lion(char* name, int age, float Land_Speed, float weight) :Animal(name, age), Land(name, age, Land_Speed)
{
	this->weight = weight;
}

Lion::Lion(const Lion& L) : Animal(L), Land(L)
{
	this->weight = L.weight;
}

void Lion::print() const
{
	Land::print();
	cout << "The Animal is: Lion" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "It's speed is: " << Land_Speed << " Kmh." << endl;
	cout << "It's weight is: " << weight << " Kg." << endl;

}

