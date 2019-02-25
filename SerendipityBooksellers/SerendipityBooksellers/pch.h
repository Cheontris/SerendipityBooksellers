// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H
#define BOOKINFO_H
#define CASHIER_H
#define INVMENU_H
#define REPORTS_H
#include <string>

extern const int ARR_SIZE;

extern std::string bookTitle[];
extern std::string isbn[];
extern std::string author[];
extern std::string publisher[];
extern std::string dateAdded[];
extern int qtyOnHand[];
extern double wholeSale[];
extern double retail[];

void repListing();
void repWholesale();
void repRetail();
void repQty();
void repCost();
void repAge();

int cashier();

int invMenu();

int bookInfo(std::string, std::string, std::string, std::string, std::string, int, double, double);
void lookUpBook();
void addBook();
void editBook();
void deleteBook();

int reports();

// TODO: add headers that you want to pre-compile here

#endif //PCH_H
