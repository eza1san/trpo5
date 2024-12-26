#include <iostream>
#include <limits>
#include "Printer.h"

using namespace std;

int main() {
    system("cls");
    int choice;
    Printer printer;

    while (true) {
        system("cls");

        string s1 = printer.getIsOn() ? "Yes" : "No";
        string s2 = printer.getHasPaper() ? "Yes" : "No";
        string s3 = printer.getIsPrinting() ? "Yes" : "No";

        cout << "\nPrinter Status\n" << endl;
        cout << "Printer is on? " << s1 << endl;
        cout << "Paper loaded? " << s2 << endl;
        cout << "Printing? " << s3 << endl;

        cout << "\nMenu:\n";
        cout << "1. Turn the printer on/off\n";
        cout << "2. Load/unload paper\n";
        cout << "3. Start/stop printing\n";
        cout << "0. Exit\n";
        cout << "Select an option: ";

        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
            continue;
        }

        if (choice == 1) {
            printer.changeIsOn();
        } else if (choice == 2) {
            printer.changeHasPaper();
        } else if (choice == 3 && printer.getIsOn() && printer.getHasPaper()) {
            printer.changeIsPrinting();
        } else if (choice == 3) {
            cout << "Error: Ensure the printer is on and paper is loaded." << endl;
        } else if (choice == 0) {
            cout << "Exiting the program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }

    return 0;
}
