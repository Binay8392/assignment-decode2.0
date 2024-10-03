#include <iostream>
using namespace std;

int findMinSum(int arr[], int n) {
    // Sort the array in increasing order
    sort(arr, arr + n);
    
    int num1 = 0, num2 = 0;
    
    // Form two numbers by picking digits alternately
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + arr[i];
        } else {
            num2 = num2 * 10 + arr[i];
        }
    }
    
    // Return the sum of the two numbers
    return num1 + num2;
}

int main() {
    int arr[] = {6, 8, 4, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The minimum possible sum is " << findMinSum(arr, n) << endl;
    return 0;
}
