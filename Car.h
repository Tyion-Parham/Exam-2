#pragma once
#ifndef CAR_H
#define CAR_H

#include <iostream>
using namespace std;

class Car
{
private:
	string make;
	string model;
	int year;
	int speed;

public: 
	Car() : Car(0, "", "", 0) {};// Added contructors
	Car(int y, string m, string ml, int spd) :
		year(y), make(m), model(ml), speed(spd) {};
	string getMake();
	string getModel();
	int getYear();
	void setMake(string m);
	void setModel(string ml);
	void setYear(int y);
	int getSpdMPH();
	int getSpdKPH(int spd);
	int increase();
	int decrease();
};

#endif // !CAR_H