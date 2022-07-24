#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Animal
{
protected:
	char* name;
	int age;
	static int count;//number of animals
public:
	Animal();//default ctor
	Animal(char* name, int age);//ctor
	Animal(const Animal& A);//copy ctor
	virtual ~Animal()=0;//dctor
	virtual void print()const ;
	char* get_name()const { return name;}
	static int print_static() { return count; }//static value
	friend class AnimalManagement;//access to static value
	virtual const char* get_type() = 0;
};

