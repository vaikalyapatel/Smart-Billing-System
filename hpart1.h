// Vaikalya Jashvantkumar Patel
// Assignment-1
// Part-1

#ifndef HPART1_H_
#define HPART1_H_
#include <string>

using namespace std;

class Invoice
{
private:
	string partNumber;
	string partDescription;
	int partQuantity;
	int partPrice;

public:
	Invoice(string partNumber, string partDescription, int partQuantity, int partPrice);
	void setFpartNumber(string);
	string getFpartNumber();
	void setFpartDescription(string);
	string getFpartDescription();
	void setFpartQuantity(int);
	int getFpartQuantity();
	void setFpartPrice(int);
	int getFpartPrice();
	int getInvoiceAmount();
};
#endif