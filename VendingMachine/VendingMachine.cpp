/* 
	VendingMachine.cpp
	Matthew Bersalona
	CSCI 123 C
	09/24/2024
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void purchaseItem(double cost, string item);

int main() {
    const double chips = 1.50;
    const double snickers = 1.75;
    const double cookies = 2.00;
    int select;
    bool buying = false;

    cout << fixed << setprecision(2);
    cout << "Welcome to the Cypress College Vending Machine! \n";
    cout << "Item 1: Bag of Chips = $" << chips << "\n";
    cout << "Item 2: Snickers Bar = $" << snickers << "\n";
    cout << "Item 3: Cookies = $" << cookies << "\n";
    cout << "Enter the number of the item you wish to purchase: ";
    cin >> select;

    while (buying == false) {
        switch (select) {
        case 1:
            purchaseItem(chips, "bag of chips");
            buying = true;
            break;
        case 2:
            purchaseItem(snickers, "Snickers");
            buying = true;
            break;
        case 3:
            purchaseItem(cookies, "cookies");
            buying = true; 
            break;
        default:
            cout << "Invalid selection. \n";
            cout << "Enter the number of the item you wish to purchase: ";
            cin >> select;
            break;
        }
    }

    return 0;
}

void purchaseItem(double cost, string item) {
    double payment = 0;
    double enter, change;
    cout << fixed << setprecision(2);
    while (cost > payment) {
        cout << "Enter coin amount to put in machine (0.01, 0.05, 0.10, 0.25, or 1.00): ";
        cin >> enter;
        if (enter != 0.01 && enter != 0.05 && enter != 0.10 && enter != 0.25 && enter != 1.00) {
            cout << "You entered an invalid amount. \n";
        }
        else {
            payment += enter;
            cout << "Total amount entered: $" << payment << ".\n";
        }
    }
    change = payment - cost;
    cout << "Enjoy your " << item << "!\n";
    cout << "Your change is $" << change << ".\n";
}