//Ques : Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;
    int area= 3.14*r*r;
    int cur=2*3.14*r;
    if(area>cur){
        cout<<"area is greater than circumference";
    }
    else{
        cout<<"circumference is greater than area";
    }
    return 0;
}