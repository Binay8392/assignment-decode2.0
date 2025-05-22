#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {43, 23, 65, 87, 2, 5, 8, 45, 78, 5767, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;

    return 0;
}