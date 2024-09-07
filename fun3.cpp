#include<iostream>
using namespace std;
int odd(int a, int b){
   for(int i=a;i<=b;i++)
   {
    if(i%2 !=0)
    cout<<i<<"  ";

   }
   cout<<endl;
}
int main(){
    int x;
    cout<<"starting number:";
    cin>>x;
    int y;
    cout<<"ending number:";
    cin>>y;
    cout<<odd(x,y);
    return 0;
}