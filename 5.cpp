#include<iostream>
using namespace std;

int main() {
    char char1, char2;
    cout << "Enter first character: ";
    cin >> char1;
    cout << "Enter second character: ";
    cin >> char2;
    int difference = char1 - char2;
    cout << difference;
    return 0;
}
