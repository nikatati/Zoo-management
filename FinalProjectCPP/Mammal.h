#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Water.h"

class Mammal : virtual public Water
{
protected:
	char* foodtype;
public:
	~Mammal() { delete[]foodtype; }
	Mammal() { foodtype = NULL; }
	Mammal(char* name, int age, float Swim_Speed, char* ft) : Animal(name, age), Water(name, age, Swim_Speed)
	{
		foodtype = new char[strlen(ft) + 1];
		if (ft != NULL)
			strcpy(foodtype, ft);
		else
			foodtype = NULL;
	}
	virtual void print() const
	{
		Animal::print();
		cout << "Food type: " << foodtype << endl;
	}
};

