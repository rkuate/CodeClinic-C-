#include <cstdio>
#include <list>
#include <string>
#include <iostream>

using namespace std;

struct date;
struct bill;
class item;

struct date {
	int dd, mm, yyyy;
};

struct bill {
	std::list<item> items;
	double totalPrice;
};

class item {
private:
	int itemNum;
	string itemName;
	double itemPrice;
public:
	void setItemNum(int value) { itemNum = value; };
	int getItemNum() { return itemNum; };
	void setItemName(string value) { itemName = value; };
	string getItemName() { return itemName; };
	void setItemPrice(double value) { itemPrice = value; };
	double getItemPrice() { return itemPrice; };
};

int main()
{
	const char* fileName = "ReportFile.txt";
	FILE* file = fopen(fileName, "a");

	puts("Super Market Billing\n====================");
	puts("Choose an action:\n1. Print the report\n2. Add an item\n3. Remove an item\n4. Edit an item\n5. Show Item Details\n6. Exit");
	puts("Choose an option: ");
	int choice;
	cin >> choice;
	switch (choice) {
		FILE* file;
	case 1:
		file = fopen(fileName, "r");
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	default:
		puts("Wrong input");
		break;
	}
	return 0;
}