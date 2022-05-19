// Vaikalya Jashvantkumar Patel
// Assignment-1
// Part-2

#ifndef HPART2_H_
#define HPART2_H_
#include <string>

using namespace std;

class Date
{
private:
	int month;
	int day;
	int year;

public:
	Date(int month, int day, int year);
	void setMonth(int);
	int getMonth();
	void setDay(int);
	int getDay();
	void setYear(int);
	int getYear();
	void displayDate();
};
#endif