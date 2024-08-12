#include "Car.h"
#include "Date.h"
#include <iostream>

int main()
{
	Date birthDay(10, 22, 2000);
	Date BirthdayPrinter; 
	birthDay.dateF1(birthDay);
	BirthdayPrinter.dateF1(birthDay);
	birthDay.dateF2(birthDay);
	BirthdayPrinter.dateF2(birthDay);
	birthDay.dateF3(birthDay);
	BirthdayPrinter.dateF3(birthDay);

	//////////////////////////////////////////////////////////////////////

	Car Ferrari(2018, "Ferrari", "488 GTB", 185);
	while (Ferrari.getSpdMPH() < 200)
	{
		Ferrari.increase(3);
		cout << "..." << Ferrari.getSpdMPH();
	}
	cout << "\n*Sr";
	while (Ferrari.getSpdMPH() > 20)
	{
		Ferrari.decrease(50);
		cout << "eeeee";
	}
	cout << "ch*";
}