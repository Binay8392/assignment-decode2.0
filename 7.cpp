#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<"marks";
   cin>>a>>b>>c;
   if(a<b && a<c){
    cout<<"least mark"<<a<<endl;
   }
   else if(b<a && b<c){
    cout<<"least mark"<<b<<endl;
   }
   else if(c>a && c>b) {
    cout<<"least mark"<<c;
   }
   else {
    cout<<"tie"<<endl;
   }
    return 0;
}