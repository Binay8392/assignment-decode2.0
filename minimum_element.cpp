#include<iostream>
#include<climits>
using namespace std;
void pmin(int arr[],int n,int idx,int min)
{
    if(idx==n){
        cout<<min;
        return;
    }
    if(min>arr[idx]) min=arr[idx];
    pmin(arr,n,idx+1,min);
}
int main(){
 int arr[]={1,5,7,10,13,644,232,3423};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    pmin(arr,n,0, INT_MAX);
} 



