//This is extra    PLEASE DONT GRADE MY DOG
#include "Dog.h"


void Dog::setName(string n)
{
	name = n;
}
void Dog::setAge(int time)
{
	age = time;
}
int Dog::dogAge(int a)
{
	int dogAge;
	cout << "its age in dog years is ";
	dogAge = getAge() * 7;
	return dogAge;
}
void Dog::setBreed(string b)
{
	breed = b;
}
string Dog::getName()
{
	return name;
}
int Dog::getAge()
{
	return age;
}
string Dog::getBreed()
{
	return breed;
}