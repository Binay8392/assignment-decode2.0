#include <iostream>
#include <cstring>
using namespace std;

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the strings if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    string arr[] = {"apple", "orange", "banana", "grape", "cherry"};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    cout << "Sorted array of strings: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
