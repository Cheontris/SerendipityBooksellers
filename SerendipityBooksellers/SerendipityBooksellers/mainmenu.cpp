#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	system("color f0");
	//Define variables
	int choice = 0;
	//Display menu
	while (choice != 4) {
		cout << setw(25) << "Serendipity Booksellers" << endl;
		cout << setw(20) << "Main Menu\n" << endl;
		cout << "1.   Cashier Module" << endl;
		cout << "2.   Inventory Database Module" << endl;
		cout << "3.   Report Module" << endl;
		cout << "4.   Exit\n" << endl;
		cout << setw(21) << "Enter Your Choice: ";
		cin >> choice;
		cout << endl;
		//Data Validation
		if (choice < 1 || choice > 4) {
			cout << "ERROR: Please Enter a Number in the Range of 1-4" << endl;
		}
		else {
			switch (choice) {
			case 1: cashier();
				break;
			case 2: invMenu();
				break;
			case 3: reports();
				break;
			case 4: cout << "Goodbye!" << endl;
			}
		}
	}
	return 0;
}