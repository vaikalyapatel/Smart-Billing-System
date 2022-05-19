// Vaikalya Jashvantkumar Patel
// Assignment-1
// Part-1

#include "hpart1.h"
#include <iostream>

using namespace std;

Invoice::Invoice(string partNumber1, string partDescription1, int partQuantity1, int partPrice1)
{
	partNumber = partNumber1;
	partDescription = partDescription1;
	partPrice = partPrice1;
	partQuantity = partQuantity1;
}
void Invoice::setFpartNumber(string partNumber1)
{
	partNumber = partNumber1;
}
string Invoice::getFpartNumber()
{
	return partNumber;
}

void Invoice::setFpartDescription(string partDescription1)
{
	partDescription = partDescription1;
}
string Invoice::getFpartDescription()
{
	return partDescription;
}

void Invoice::setFpartQuantity(int partQuantity1)
{
	partQuantity = partQuantity1;
}
int Invoice::getFpartQuantity()
{
	if (partQuantity < 0)
	{
		partQuantity = 0;
		cout << "\n\nINVALID DIGITS ENTERED";
	}
	else
	{
		partQuantity = partQuantity;
	}
	return partQuantity;
}

void Invoice::setFpartPrice(int partPrice1)
{
	partPrice = partPrice1;
}
int Invoice::getFpartPrice()
{
	if (partPrice < 0)
	{
		partPrice = 0;
		cout << "\n\nINVALID DIGITS ENTERED";
	}
	else
	{
		partPrice = partPrice;
	}
	return partPrice;
}

int Invoice::getInvoiceAmount()
{
	return partQuantity * partPrice;
}