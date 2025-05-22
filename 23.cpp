#include<iostream>
using namespace std;

int main() {
    int arr[] = {9, 2, 5, 3, 8, 4, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int even_sum = 0;
    int odd_sum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }

    int difference = even_sum - odd_sum;
    cout << "Difference between even and odd indexed sum: " << difference << endl;

    return 0;
}
