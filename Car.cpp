#include "Car.h"

string Car::getMake()
{
	return make;
}
string Car::getModel()
{
	return model;
}
int Car::getYear()
{
	return year;
}

void Car::setMake(string m)
{
	make = m;
}
void Car::setModel(string ml)
{
	model = ml;
}
void Car::setYear(int y)
{
	year = y;
}
int Car::getSpdMPH()
{
	return speed;
}
int Car::getSpdKPH(int spd)
{
	int euroSpeed;
	euroSpeed = 1.60934 * spd;
	return euroSpeed;
}
int Car::increase()
{
	speed += 5;
	return speed;
}
int Car::decrease()
{
	speed -= 5;
	return speed;
}