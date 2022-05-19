// Vaikalya Jashvantkumar Patel
// Assignment - 1

#include <iostream>
#include "hpart1.h"
#include "hpart2.h"

using namespace std;

int main()
{
	string enterPtNumber;
	string enterPtDescription;
	int enterPtQuantity;
	int enterPtPrice;

	cout << "\t--SMART BILLING SYSTEM--" << endl;
	cout << "\nNOTE- ENTER VALUES PRECISELY, ERROR IN INPUT MAY RESULT IN '0' AS DEFAULT VALUE\n";
	cout << "\nEnter part Number- ";
	cin >> enterPtNumber;
	cout << "\nEnter part Description- ";
	cin.ignore();
	getline(cin, enterPtDescription);
	cout << "\nEnter the Quantity of parts bought- ";
	cin >> enterPtQuantity;
	cout << "\nEnter the Price per Part- $";
	cin >> enterPtPrice;

	Invoice i(enterPtNumber, enterPtDescription, enterPtQuantity, enterPtPrice);
	cout << "\n\t--INVOICE--";
	cout << "\nPart Number- " << i.getFpartNumber();
	cout << "\nPart Description- " << i.getFpartDescription();
	cout << "\nPart Quantity- " << i.getFpartQuantity();
	cout << "\nPart Price- $" << i.getFpartPrice();
	cout << "\nTotal Amount- $" << i.getInvoiceAmount();
	cout << "\n\n\t--THANK YOU * VISIT AGAIN--\n";

// PART-2

	int enterMonth;
	int enterDay;
	int enterYear;

	cout << "\nEnter a valid Month- ";
	cin >> enterMonth;
	cout << "\nEnter a valid Day- ";
	cin >> enterDay;
	cout << "\nEnter a valid Year- ";
	cin >> enterYear;

	Date d(enterMonth, enterDay, enterYear);
	cout << "\nYou entered the following data\n";
	cout << "Month- " << d.getMonth() << "; Day- " << d.getDay() << "; Year- " << d.getYear() << endl << endl;
	d.displayDate();

	return 0;
}