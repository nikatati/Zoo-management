#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Air.h"
#include "Animal.h"
#include "Crocodile.h"
#include "Dolphin.h"
#include "Eagle.h"
#include "Parrot.h"
#include "Land.h"
#include "Lion.h"
#include "Whale.h"
#include "Water.h"
#include "Mammal.h"
#include "Bird.h"

using namespace std;

class ZooManagement
{
private:
	Animal** Arr;
	int Size;

public:
	ZooManagement();//ctor
	~ZooManagement();
	void Init();//menu
	bool Find(char* name);//track animal by name
	virtual void operator +=(Animal* a);//add pointer to the array
	virtual void operator -=(char* name);//remove object from array
	bool IsExist(char* name);//chack if name is already exist
	void PrintAll();
	bool Vaild_Name(char* name);//check if name is valid
};

