#include<iostream>
using namespace std;
int sum(int a,int b){
if(a<0 ) cout<<"write a positive number";
if(b<0) cout<<"write a positive number" ;
    return a+b;
}
int main()
{
    cout<<sum(7,2);
    return 0;
}