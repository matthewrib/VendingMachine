/* 
	VendingMachine.cpp
	Matthew Bersalona
	CSCI 123 C
	09/24/2024
*/

#include <iostream>

using namespace std;

void purchaseItem(double cost);

int main() {
	const double chips = 1.50;
	const double snickers = 1.75;
	const double cookies = 2.00;
	int select;

	cout << "Welcome to the Cypress College Vending Machine! \n";
	cout << "Item 1: Bag of Chips = " << chips << "\n Item 2: Snickers Bar = " << snickers << "\n Item 3: Cookies = " << cookies << "\n";
	cout << "Enter the number of the item you wish to purchase: ";
	cin >> select; 
	
	switch (select) {
		case 1: 
			purchaseItem(chips);
			break;
		case 2:
			purchaseItem(snickers);
			break;
		case 3: 
			purchaseItem(cookies);
			break;
		default:
			cout << "Invalid selection. ";
			cout << "Enter the number of the item you wish to purchase: ";
			cin >> select;
			break;
	}

	return 0;
}

void purchaseItem(double cost) {
	double payment = 0;
	double enter, change;
	while (cost >= payment) {
		cout << "Enter coin amount to put in machine (0.01, 0.05, 0.10, 0.25, or 1.00): ";
		cin >> enter;
		if (enter != 0.01 && enter != 0.05 && enter != 0.10 && enter != 0.25 && enter != 1.00) {
			cout << "You entered an invalid amount. \n";
		}
		else {
			cout << "Total amount entered: " << enter << ".\n";
		}
	}
	change = payment - cost;
	cout << "Enjoy! \n";
	cout << "Your change is " << change << ".";
}