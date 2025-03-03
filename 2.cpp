#include <iostream>
using namespace std;

int rev(int num, int reversedNum = 0) {
    if (num == 0) {
        return reversedNum;
    }
    return rev(num / 10, reversedNum * 10 + num % 10);
}

int main() {
    int num = 56;
    cout << "Reversed number: " << rev(num) << endl;
    return 0;
}