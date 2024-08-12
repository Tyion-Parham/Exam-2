//This is extra    PLEASE DONT GRADE MY DOG
#pragma once
#ifndef DOG_H
#define DOG_H

#include <iostream>
using namespace std;

class Dog
{
private:
	string name;
	int age;
	string breed;

public:
	int dogAge(int a);
	void setName(string n);
	void setAge(int time);
	void setBreed(string b);
	string getName();
	int getAge();
	string getBreed();
};

#endif // !DOG_H