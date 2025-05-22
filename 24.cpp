//Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,23,67,7,75,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2==0) {
            arr[i]=arr[i]+10;
        }
        else arr[i]=arr[i]*2;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
}