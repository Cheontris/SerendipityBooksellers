
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int bookInfo(string isbn, string title, string author, string publisher, string date, int qty, double wholesale, double retail) {
	cout << setw(25) << "Serendipity Booksellers" << endl;
	cout << setw(23) << "Book Information\n" << endl;
	cout << "ISBN: " << isbn << endl;
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publisher: " << publisher << endl;
	cout << "Date Added: " << date << endl;
	cout << "Quantity-On-Hand: " << qty << endl;
	cout << "Wholesale Cost: " << wholesale << endl;
	cout << "Retail Price: " << retail << endl;
	cout << endl;
	return 0;
}

