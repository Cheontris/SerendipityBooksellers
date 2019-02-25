#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int ARR_SIZE = 20;
string bookTitle[ARR_SIZE];
string isbn[ARR_SIZE];
string author[ARR_SIZE];
string publisher[ARR_SIZE];
string dateAdded[ARR_SIZE];
int qtyOnHand[ARR_SIZE];
double wholeSale[ARR_SIZE];
double retail[ARR_SIZE];

int invMenu() {
	//Define variables
	int choice = 0;
	//Display menu
	while (choice != 5) {
		cout << setw(25) << "Serendipity Booksellers" << endl;
		cout << setw(23) << "Inventory Database\n" << endl;
		cout << "1.   Look Up a Book" << endl;
		cout << "2.   Add a Book" << endl;
		cout << "3.   Edit a Book's Record" << endl;
		cout << "4.   Delete a Book" << endl;
		cout << "5.   Return to the Main Menu\n" << endl;
		cout << setw(21) << "Enter Your Choice: ";
		cin >> choice;
		cin.ignore();
		cout << endl;
		//Data Validation
		if (choice < 1 || choice > 5) {
			cout << "ERROR: Please Enter a Number in the Range of 1-5" << endl;
		}
		else {
			switch (choice) {
			case 1:lookUpBook();
				break;
			case 2: addBook();
				break;
			case 3: editBook();
				break;
			case 4: deleteBook();
				break;
			case 5: cout << "Returning to the Main Menu" << endl;
			}
		}
	}
	return 0;
}
void lookUpBook() {
	int count;
	bool isHere = false;
	cout << "You selected \'Look Up Book\'\n";
	cout << "What is the title you are looking for? ";
	string lookTitle;
	getline(cin, lookTitle);
	for (count = 0; count < ARR_SIZE; count++) {
		if (bookTitle[count] == lookTitle) {
			isHere = true;
			bookInfo(isbn[count], bookTitle[count], author[count], publisher[count], dateAdded[count], qtyOnHand[count], wholeSale[count], retail[count]);
			break;
		}
	}
	if (!isHere) {
		cout << "The book you are looking for cannot be found\n\n";
	}
}
void addBook() {
	bool canAdd = false;
	int count;
	cout << "You selected \'Add Book\'\n";
	for (count = 0; count < ARR_SIZE; count++) {
		if (bookTitle[count] == "") {
			canAdd = true;
			break;
		}
	}
	if (canAdd) {
		cout << "Enter the book title: ";
		getline(cin, bookTitle[count]);
		cout << "\nEnter the ISBN: ";
		getline(cin, isbn[count]);
		cout << "\nEnter the author's name: ";
		getline(cin, author[count]);
		cout << "\nEnter the publisher's name: ";
		getline(cin, publisher[count]);
		cout << "\nEnter the date (MM-DD-YYYY): ";
		getline(cin, dateAdded[count]);
		cout << "\nEnter the quantity of book being added: ";
		cin >> qtyOnHand[count];
		cout <<  "\nEnter the wholesale cost of the book: ";
		cin >> wholeSale[count];
		cout << "\nEnter the retail price of the book: ";
		cin >> retail[count];
	}
	else {
		cout << "You cannot add a book at this time.\n" << endl;
	}
}
void editBook() {
	cout << "You selected \'Edit Book\'\n";
	int count;
	bool isHere = false;
	cout << "What is the title you are looking for? ";
	string lookTitle;
	getline(cin, lookTitle);
	for (count = 0; count < ARR_SIZE; count++) {
		if (bookTitle[count] == lookTitle) {
			isHere = true;
			bookInfo(isbn[count], bookTitle[count], author[count], publisher[count], dateAdded[count], qtyOnHand[count], wholeSale[count], retail[count]);
			break;
		}
	}
	if (!isHere) {
		cout << "The book you are looking for cannot be found\n\n";
	}
	else {
		cout << "What do you wish to change?\n1. ISBN\n2. Book Title\n3. Author Name\n4. Publisher\n5. Date Added\n6. Quantity\n7. Wholesale Price\n8. Retail Price\n9. Exit Edit Menu\n";
		int choice;
		bool isChoosing = true;
		do {
			cin >> choice;
			cin.ignore();
			switch (choice) {
			case 1:
				cout << "Enter the new ISBN: ";
				getline(cin, isbn[count]);
				break;
			case 2:
				cout << "Enter the new Book Title: ";
				getline(cin, bookTitle[count]);
				break;
			case 3:
				cout << "Enter the new Author: ";
				getline(cin, author[count]);
				break;
			case 4:
				cout << "Enter the new Publisher: ";
				getline(cin, publisher[count]);
				break;
			case 5:
				cout << "Enter the new Date Added: ";
				getline(cin, dateAdded[count]);
				break;
			case 6:
				cout << "Enter the new Quantity on Hand: ";
				cin >> qtyOnHand[count];
				cin.ignore();
				break;
			case 7:
				cout << "Enter the new Wholesale Price: ";
				cin >> wholeSale[count];
				cin.ignore();
				break;
			case 8:
				cout << "Enter the new Retail Price: ";
				cin >> retail[count];
				cin.ignore();
				break;
			default:
				isChoosing = false;
				bookInfo(isbn[count], bookTitle[count], author[count], publisher[count], dateAdded[count], qtyOnHand[count], wholeSale[count], retail[count]);
			}
			if (choice != 9) {
				cout << "Would you like to change any more information? Enter 9 to exit. ";
			}
		} while (isChoosing);
	}
}
void deleteBook() {
	cout << "You selected \'Delete Book\'\n";
	cout << "What is the title you are looking for? ";
	int count;
	bool isHere = false;
	string lookTitle;
	getline(cin, lookTitle);
	for (count = 0; count < ARR_SIZE; count++) {
		if (bookTitle[count] == lookTitle) {
			isHere = true;
			break;
		}
	}
	if (!isHere) {
		cout << "The book you are looking for cannot be found\n";
	}
	else {
		cout << "The book has been found, are you sure you wish to delete the book? (Y/N) ";
		char deletion;
		cin >> deletion;
		if (deletion == 'Y' || deletion == 'y') {
			//EXTERMINATE EXTERMINATE EXTERMINATE
			bookTitle[count] = "";
			isbn[count] = "";
			cout <<"This book has been erased from the universe, I hope you're happy :("<<endl<< endl;
		}
		if (deletion == 'N' || deletion == 'n') {
			cout << "Good choice, we shouldn't get all fahrenheit 451 up in here.\n\n";
		}
	}
}
