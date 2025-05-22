#include<iostream>
using namespace std;

int main(){
    int arr[]={12,22,87,54,32,87,12,32,22}; // Extra comma removed
    int n=sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        bool flag = true; // assume arr[i] is unique

        for (int j = 0; j < n; j++)
        {
            if(i==j) continue; // skip comparing with self

            if(arr[i]==arr[j]) {
                flag = false; // duplicate found
                break;
            }
        }

        if(flag == true) {
            cout << "Unique number: " << arr[i];
            break;
        }
    }

    return 0;
}
