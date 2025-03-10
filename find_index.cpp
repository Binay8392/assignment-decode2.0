#include<iostream>
using namespace std;

int findIndex(int arr[], int n, int idx, int target) {
    if (idx == n) {
        return -1;
    }
    if (arr[idx] == target) {
        return idx;
    }
    return findIndex(arr, n, idx + 1, target);
}

int main() {
    int arr[] = {1, 5, 7, 10, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int index = findIndex(arr, n, 0, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}