#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
using namespace std;

class Air :virtual public Animal
{
protected:
	float Air_Speed;
public:
	Air();//default ctor
	Air(char* name, int age, float Air_Speed);//ctor
	Air(const Air& A);//copy ctor
	virtual ~Air();//dctor
	virtual void print() const;//print func
	virtual const char* get_type() { return "Air"; }
};

