#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Animal.h"
#include "Water.h"
#include "Mammal.h"

using namespace std;

class Whale : public Mammal
{
private:
	int fit;
public:
	Whale();//default ctor
	Whale(char* name, int age, float Swim_Speed, char* foodtype, int fit);
	Whale(const Whale& sh);//copy ctor
	virtual ~Whale();//dctor
	virtual void print() const;//print func
};



