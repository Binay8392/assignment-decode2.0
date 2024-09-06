#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    int firstTerm = 4;
    int commonDifference = 3;

    cout << "The AP series is: ";
    for (int i = 0; i < n; i++) {
        int term = firstTerm + i * commonDifference;
        cout << term << " ";
    }
    cout << endl;

    return 0;
}
