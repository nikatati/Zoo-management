#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Air.h"
#include "Animal.h"
using namespace std;

class Eagle :public Air
{
protected:
	float Max_Height;
public:
	Eagle();//default ctor
	Eagle(char* name, int age, float Air_Speed, float Max_Height);//ctor
	Eagle(const Eagle& E);//copy ctor
	virtual ~Eagle() {}//dctor
	virtual void print() const;//print func
};
