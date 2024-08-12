#include "Date.h"
#include <string>

Date::Date()
{
	months = "January ";
	day = 1;
	year = 2000;
}

Date::Date(int m, int d, int y)
	: month(m),
	day(d),
	year(y)
{
	if (month == 1)
		months = "January";
	else if (month == 2)
		months = "February";
	else if (month == 3)
		months = "March";
	else if (month == 4)
		months = "April";
	else if (month == 5)
		months = "May";
	else if (month == 6)
		months = "June";
	else if (month == 7)
		months = "July";
	else if (month == 8)
		months = "August";
	else if (month == 9)
		months = "September";
	else if (month == 10)
		months = "October";
	else if (month == 11)
		months = "November";
	else if (month == 12)
		months = "December";
	else
	{
		cout << "\nnot a month.";
		
	}
}

void Date::dateF1(Date d)
{
	cout << d.month << "/" << d.day << "/" << d.year << endl;
}
void Date::dateF2(Date d)
{
	cout << d.months << " " << d.day << ", " << d.year << endl;
}
void Date::dateF3(Date d)
{
	cout << d.day << " " << d.months << " " << d.year << endl;
}

Date::~Date()
{
}