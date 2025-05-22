//Count the number of elements strictly greater than x.
#include <iostream>
using namespace std;

int main() {
    int x;
    int arr[] = {43, 23, 65, 87, 2, 5, 8, 45, 78, 5767, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Enter the number: ";
    cin >> x;

    bool found = false; 

    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            cout << "Number greater than " << x << " found: " << arr[i] << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No number greater than " << x << " found in the array." << endl;
    }

    return 0;
}