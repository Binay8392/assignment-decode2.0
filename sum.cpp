#include<iostream>
using namespace std;
int sum(int arr[],int n, int idx){
    if(idx==n)
    {return 0;}
    return arr[idx]+sum(arr,n,idx+1);
}
int main(){
    int arr[]={1000,4,6,3,6,8,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,n,0);
    return 0;
}