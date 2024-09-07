#include <iostream>
using namespace std;

int main() {
    int num1, num2, product;
    int *ptr1, *ptr2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    product = (*ptr1) * (*ptr2);

    cout << "Product of the two numbers: " << product << endl;

    return 0;
}
