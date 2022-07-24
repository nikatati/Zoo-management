#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Land.h"
using namespace std;

class Lion :public Land
{
protected:
	float weight;
public:
	Lion();//default ctor
	Lion(char* name, int age, float Land_Speed, float weight);//ctor
	Lion(const Lion& L);//copy ctor
	virtual ~Lion() {}//dctor
	virtual void print() const;//print func
};
