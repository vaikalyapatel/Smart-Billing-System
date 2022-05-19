// Vaikalya Jashvantkumar Patel
// Assignment-1
// Part-2

#include "hpart2.h"
#include <iostream>

using namespace std;

Date::Date(int month1, int day1, int year1)
{
	month = month1;
	day = day1;
	year = year1;
}

void Date::setMonth(int month1)
{
	month = month1;
}
int Date::getMonth()
{
	if (month>=1 && month<=12)
	{
		month = month;
	}
	else
	{
		month = 1;
	}
	return month;
}

void Date::setDay(int day1)
{
	day = day1;
}
int Date::getDay()
{
	return day;
}

void Date::setYear(int year1)
{
	year = year1;
}
int Date::getYear()
{
	return year;
}

void Date::displayDate()
{
	cout << month << "/" << day << "/" << year;
}