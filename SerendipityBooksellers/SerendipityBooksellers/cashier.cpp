
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int cashier()
{
	//Declaring variables used in program
	string date;
	int quantity;
	string isbn;
	string title;
	double unitPrice;
	double subtotal;
	double salesTaxPercent = 0.06;
	double salesTaxAdded;
	double totalPrice;
	char wantToAgain = 'Y';
	//Entering Information
	while (wantToAgain == 'Y') {
		cout << "Serendipity Booksellers" << endl;
		cout << "Cashier Module" << endl << endl;
		cin.ignore();
		cout << "Date: ";
		getline(cin, date);
		cout << "Quantity of Book: ";
		cin >> quantity;
		cin.ignore();
		cout << "ISBN: ";
		getline(cin, isbn);
		cout << "Title: ";
		getline(cin, title);
		cout << "Price: ";
		cin >> unitPrice;
		//Calculations
		subtotal = unitPrice * quantity;
		salesTaxAdded = subtotal * salesTaxPercent;
		totalPrice = subtotal + salesTaxAdded;
		//Displaying Sales Slip
		/*
		All of the text will be lined up if:
		1) The book title is 5 characters or longer
		2) The quantity is less than 1000
		3) All prices (unit, subtotal, sales tax added, or total) are less than $999.99

		If any one of the criteria isn't met all the data will still display, it will just not look pretty
		*/
		cout << "----------------------------------------------------------" << endl;
		cout << "Serendipity Booksellers" << endl << endl;
		cout << "Date: " << date << endl << endl;
		cout << "Qty" << setw(6) << "ISBN" << setw(3 + isbn.length()) << "Title" << setw(2 + title.length()) << "Price" << setw(9) << "Total" << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << quantity << setw(isbn.length() + (5 - to_string(quantity).length())) << isbn << setw(2 + title.length()) << title << setw(3) << "$" << setw(6) << fixed << setprecision(2) << unitPrice << setw(3) << "$" << setw(6) << fixed << setprecision(2) << subtotal;
		cout << endl << endl;
		cout << setw(isbn.length() + (5 - to_string(quantity).length()) + 11) << "Subtotal" << setw((title.length() - 8) + 12) << "$" << setw(6) << fixed << setprecision(2) << subtotal << endl;
		cout << setw(isbn.length() + (5 - to_string(quantity).length()) + 6) << "Tax" << setw((title.length() - 3) + 12) << "$" << setw(6) << fixed << setprecision(2) << salesTaxAdded << endl;
		cout << setw(isbn.length() + (5 - to_string(quantity).length()) + 8) << "Total" << setw((title.length() - 5) + 12) << "$" << setw(6) << fixed << setprecision(2) << totalPrice << endl << endl;
		cout << "Thank You for Shopping at Serendipity!" << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << "Do you wish to process another transaction? (Y/N): " << endl;
		cin >> wantToAgain;
		cin.ignore();
	}
	return 0;
}