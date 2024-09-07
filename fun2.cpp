#include<iostream>
using namespace std;
int area(int n){
    int k=3.14*n*n;
    return k;
}
int main(){
    int a;
    cout<<"enter radius:";
    cin>>a;
    cout<<"area is: " <<area(a);
    return 0;
}