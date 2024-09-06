#include <iostream>
using namespace std;

int main() {
    int amount, remainder;

    cout << "Enter the amount: ";
    cin >> amount;

    switch (amount / 2000) {
        case 0: break;
        default: cout << "Notes of 2000 = " << amount / 2000 << endl;
                 amount %= 2000;
    }

    switch (amount / 500) {
        case 0: break;
        default: cout << "Notes of 500 = " << amount / 500 << endl;
                 amount %= 500;
    }

    switch (amount / 200) {
        case 0: break;
        default: cout << "Notes of 200 = " << amount / 200 << endl;
                 amount %= 200;
    }

    switch (amount / 100) {
        case 0: break;
        default: cout << "Notes of 100 = " << amount / 100 << endl;
                 amount %= 100;
    }

    switch (amount / 50) {
        case 0: break;
        default: cout << "Notes of 50 = " << amount / 50 << endl;
                 amount %= 50;
    }

    switch (amount / 20) {
        case 0: break;
        default: cout << "Notes of 20 = " << amount / 20 << endl;
                 amount %= 20;
    }

    switch (amount / 10) {
        case 0: break;
        default: cout << "Notes of 10 = " << amount / 10 << endl;
                 amount %= 10;
    }

    switch (amount / 5) {
        case 0: break;
        default: cout << "Notes of 5 = " << amount / 5 << endl;
                 amount %= 5;
    }

    if (amount > 0) {
        cout << "Remaining amount = " << amount << endl;
    }

    return 0;
}
