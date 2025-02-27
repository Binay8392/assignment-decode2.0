#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 1) return true;
    if (n < 1 || n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is NOT a power of 2." << endl;
    }

    return 0;
}