#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int reports() {
	//Define variables
	int choice = 0;
	//Display reports menu
	while (choice != 7) {
		cout << setw(25) << "Serendipity Booksellers" << endl;
		cout << setw(18) << "Reports\n" << endl;
		cout << "1.   Inventory Listing" << endl;
		cout << "2.   Inventory Wholesale Value" << endl;
		cout << "3.   Inventory Retail Value" << endl;
		cout << "4.   Listing by Quantity" << endl;
		cout << "5.   Listing by Cost" << endl;
		cout << "6.   Listing by Age" << endl;
		cout << "7.   Return to the Main Menu\n" << endl;
		cout << setw(21) << "Enter Your Choice: ";
		cin >> choice;
		//Validate Data
		if (choice < 1 || choice > 7) {
			cout << "ERROR: Please Enter a Number in the Range of 1-7" << endl;
		}
		else {
			switch (choice) {
			case 1: repListing();
				break;
			case 2: repWholesale();
				break;
			case 3: repRetail();
				break;
			case 4: repQty();
				break;
			case 5: repCost();
				break;
			case 6: repAge();
				break;
			case 7: cout << "Returning to the Main Menu" << endl;
			}
		}
	}
	return 0;
}
void repListing() {
	cout << "You selected \'Inventory Listing.\'\n";
}
void repWholesale() {
	cout << "You selected \'Inventory Wholesale Value.\'\n";
}
void repRetail() {
	cout << "You selected \'Retail Value.\'\n";
}
void repQty() {
	cout << "You selected \'Listing by Quantity.\'\n";
}
void repCost() {
	cout << "You selected \'Listing By Cost.\'\n";
}
void repAge() {
	cout << "You selected \'Listing By Age.\'\n";
}