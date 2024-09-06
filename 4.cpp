//Ques : Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
    int l,w;
    cin>>l>>w;
    int peri=2*(l+w);
    int area=l*w;
    if(area>peri){
        cout<<"area is greater than perimeter"<<area;
    }
    else 
    cout<<"perimeter is greater than area"<<peri;
    return 0;
}