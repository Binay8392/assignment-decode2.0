#include<iostream>
using namespace std;
int sqr(int n){
    int k=n*n;
    return k;
}
int main(){
    int a;
    cout<<"enter a number:";
    cin>>a;
    cout<<"square of "<< a << " is " <<sqr(a);
    return 0;
}