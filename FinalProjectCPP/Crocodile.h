#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Land.h"
using namespace std;

class Crocodile :public Land, public Water
{
protected:
	float weight;
public:
	Crocodile();//default ctor
	Crocodile(char* name, int age, float Swim_Speed, float Land_Speed, float weight);//ctor
	Crocodile(const Crocodile& C);//copy ctor
	virtual ~Crocodile() {}//dctor
	virtual void print() const;//print func
	virtual const char* get_type() { return "Land"; }
};

