#pragma once
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
private:
	string months;
	int month;
	int day;
	int year;

public:
	Date();
	Date(int month, int day, int year);
	void dateF1(Date d);
	void dateF2(Date d);
	void dateF3(Date d);
	~Date();
};

#endif // !DATE_H