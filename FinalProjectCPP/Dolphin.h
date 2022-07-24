#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Mammal.h"

using namespace std;

class Dolphin : public Mammal
{
protected:
	float Jump_Height;
public:
	Dolphin();//default ctor
	Dolphin(char* name, int age, float Swim_Speed, char* foodtype, float jump_height);//ctor
	Dolphin(const Dolphin& d);//copy ctor
	virtual ~Dolphin();//dctor
	virtual void print() const;//print func
};


