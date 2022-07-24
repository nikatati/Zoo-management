#pragma once
#include <iostream>
using namespace std;
#include "Animal.h"
#include "Air.h"

class Bird : virtual public Air
{
private:
	bool migratory;
public:
	~Bird() {}
	Bird() { migratory = false; }
	Bird(char* name, int age, float flight_speed, bool migratory): Animal(name, age), Air(name, age, flight_speed)
	{
		this->migratory = migratory;
	}
	virtual void print()const
	{
		Air::print();
		if (migratory)
			cout << "His migratory bird" << endl;
		else
			cout << "His not migratory bird" << endl;
	}
};
