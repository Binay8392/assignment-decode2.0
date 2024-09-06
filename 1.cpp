#include<iostream>  //Ques : Take 2 integers input and print the greatest of them.

using namespace std;
int main(){
    int p,q;
    cin>>p>>q;
    if(p>q){
        cout<<p;
    }
    else{
        cout<<q;
    }
    return 0;
}