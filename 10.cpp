#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "alphabet" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "digit" << endl;
    }
    else {
        cout << "special character." << endl;
    }

    return 0;
}
