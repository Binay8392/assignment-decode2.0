#include <iostream>
using namespace std;

void countDigitsAndSquare(int num) {
    int originalNum = num;
    int count = 0;

    while (num != 0) {
        num = num / 10;
        count++;
    }

    int square = originalNum * originalNum;

    cout << "Number of digits: " << count << endl;
    cout << "Square of the number: " << square << endl;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    countDigitsAndSquare(number);
    
    return 0;
}
